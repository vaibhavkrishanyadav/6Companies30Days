//8. Total Decoding Messages
//https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/

class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int mod = 1e9 + 7, n = str.size();
		    vector<int> dp(n+1, 0);
		    if(str[0] == '0') {
		        return 0;
		    }
		    dp[0] = 1;
		    dp[1] = 1;
		    for(int i=2; i<=n; i++) {
		        if(str[i-1] > '0') {
		            dp[i] = dp[i-1];
		        }
		        if(str[i-2] == '1' || str[i-2] == '2' && str[i-1] <= '6') {
		            dp[i] = (dp[i]+dp[i-2]) % mod;
		        }
		    }
		    return dp[n];
		}
};
