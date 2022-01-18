//2.Longest Arithmetic Progression
//https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1/

class Solution{   
public:
    int lengthOfLongestAP(int arr[], int n) {
        // code here
        if(n==1) {
            return 1;
        }
        if(n==2) {
            return 2;
        }
        vector<unordered_map<int,int>> dp(n);
        int ans = 0;
        for(int i=1;i<n;i++) {
            for(int j=0;j<i;j++) {
                int d = arr[i] - arr[j];
                if(dp[j].find(d) == dp[j].end()) {
                    dp[i][d] = 2;
                }
                else {
                    dp[i][d] = dp[j][d]+1;
                }
                ans = max(ans, dp[i][d]);
            }
        }
        return ans;
    }
};
