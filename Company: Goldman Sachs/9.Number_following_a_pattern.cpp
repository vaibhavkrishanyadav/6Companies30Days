//9. .Given a pattern containing only I's and D's. I for increasing and D for decreasing.Devise an algorithm to print the minimum number following that pattern.
// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string ans;
        int n=S.size(), d=-1;
        for(int i=1; i<=n+1; i++) {
            ans += to_string(i);
        }
        for(int i=0; i<n; i++) {
            if(S[i] == 'D' && d<0) {
                d = i;
            }
            else if(S[i] == 'I' && d>=0) {
                reverse(ans.begin()+d, ans.begin()+i+1);
                d=-1;
            }
        }
        if(d>=0 && S[n-1] == 'D') {
            reverse(ans.begin()+d, ans.end());
        }
        return ans;
    }
};
