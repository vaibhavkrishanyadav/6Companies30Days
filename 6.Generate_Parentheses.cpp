//6.Generate Parentheses
//https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/

class Solution
{
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        string s;
        solve(ans, s, n, n);
        return ans;
    }
    
    void solve(vector<string>& ans, string s, int n, int m) {
        if(n==0 && m==0) {
            ans.push_back(s);
            return;
        }
        if(n > 0) {
            solve(ans, s+'(', n-1, m);
        }
        if(m > n) {
            solve(ans, s+')', n, m-1);
        }
    }
};
