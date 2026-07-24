class Solution {
public: 
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool>row(m,false);
        vector<bool>col(n,false);
        for(int i = 0 ; i<m; i++)
        {
            for(int j = 0 ; j <n; j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i = 0 ; i<m; i++)
        {
            for(int j = 0 ; j <n; j++)
            {
                if(row[i]==true|| col[j] == true)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna