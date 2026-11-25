class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int>down(n,0);
        vector<int>curr(n,0);

        for(int j=0;j<n;j++) down[j]=triangle[n-1][j];

        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int down_side=down[j];

                int diag=down[j+1];

                curr[j]=triangle[i][j]+min(down_side,diag);
            }

        down=curr;
        }

        return down[0];
    }
};