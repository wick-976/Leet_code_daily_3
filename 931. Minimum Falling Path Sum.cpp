class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));

        //now we pre-computed the base case of the matrix
        for(int j=0;j<m;j++) dp[n-1][j]=matrix[n-1][j];

        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                int down=INT_MAX;
                int r_diag=INT_MAX;
                int l_diag =INT_MAX;
                
                down=dp[i+1][j];
                if(j <m-1)r_diag=dp[i+1][j+1];
                if(j>0) l_diag=dp[i+1][j-1];

                dp[i][j]=matrix[i][j]+min({down,r_diag,l_diag});
            }
        }
    int ans=INT_MAX;
    for(int j=0;j<m;j++)
    {
        ans=min(ans,dp[0][j]);
    }
    return ans;
    }
};