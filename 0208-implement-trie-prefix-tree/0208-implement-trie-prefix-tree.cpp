class Trie {
private:
    struct TrieNode{
        TrieNode* a[26];
        bool fl = false;
        TrieNode(){
            fl = false;
            for(int i = 0 ; i <26; i++)
            {
                a[i]= nullptr;
            }
        }
    };
public:
   TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        for(int i= 0 ; i <word.size(); i++)
        {
            if(curr->a[word[i]-'a'] == nullptr)
            {
                curr->a[word[i]-'a']= new TrieNode();
            }
            curr = curr->a[word[i]-'a'];
        }
        curr->fl = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(int i = 0 ; i <word.size(); i++)
        {
            if(curr->a[word[i]-'a']==nullptr)
            {
                return false;
            }
            curr= curr->a[word[i]-'a'];
        }
        if(curr->fl == true)
        {
            return true;  
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(int i = 0 ; i <prefix.size(); i++)
        {
            if(curr->a[prefix[i]-'a']==nullptr)
            {
                return false;
            }
            curr = curr->a[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna