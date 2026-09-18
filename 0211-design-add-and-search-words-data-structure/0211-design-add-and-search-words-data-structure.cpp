class TrieNode {
public:
    TrieNode* a[26];
    bool fl;
    TrieNode(){
        for(int i = 0 ; i <26; i++)
        {
            a[i]=nullptr;
        }
        fl = false;
    }
};
class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    bool dfs(string &word, TrieNode* curr, int idx)
    {
        if(idx == word.size())
        {
            return curr->fl;
        }
        if(word[idx]=='.')
        {
            for(int i = 0 ; i <26; i++)
            {
                if(curr->a[i]!= nullptr)
                {
                    if(dfs(word, curr->a[i], idx+1)){
                        return true;
                    }
                }
            }
            return false;
        }
        else
        {
            if(curr->a[word[idx]-'a']==nullptr)
            {
                return false;
            }
            return dfs(word, curr->a[word[idx]-'a'], idx+1);
        }
    }
    void addWord(string word) {
        TrieNode* curr = root;
        for(int i = 0 ; i <word.size(); i++)
        {
            if(curr->a[word[i]-'a']==nullptr)
            {
                curr->a[word[i]-'a'] = new TrieNode();
            }
            curr = curr->a[word[i]-'a'];
        }
        curr->fl = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        return dfs(word, curr, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna