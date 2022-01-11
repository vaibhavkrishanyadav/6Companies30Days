//1.Calculating Maximum Profit
//https://practice.geeksforgeeks.org/problems/maximum-profit4657/1

class Solution {
  public:
    int maxProfit(int k, int n, int a[]) {
        // code here
        vector<vector<int>> dp(k+1, vector<int>(n,0));
        for(int i=1; i<=k; i++){
            int maxi = INT_MIN;
            for(int j=1; j<n; j++){
                maxi = max(maxi, dp[i-1][j-1]-a[j-1]);
                dp[i][j] = max(dp[i][j-1], maxi+a[j]);
            }
        }
        return dp[k][n-1];
    }
};
