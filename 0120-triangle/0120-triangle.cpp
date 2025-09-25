class Solution {
public:

    int solve(vector<vector<int>>& triangle,int i,int j,vector<vector<int>>& dp){
        int n = triangle.size();
        if(i==n-1){
            return triangle[i][j];
        }

        if(dp[i][j]!=INT_MAX){
            return dp[i][j];
        }

        int sol=min(solve(triangle,i+1,j,dp),solve(triangle,i+1,j+1,dp));

        return dp[i][j]=triangle[i][j]+sol;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[0].size();

        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        int ans=solve(triangle,0,0,dp);
        return ans;
    }
};