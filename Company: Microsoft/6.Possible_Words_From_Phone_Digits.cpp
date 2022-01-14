//6.Possible Words From Phone Digits
//https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    map<int, vector<string>> mp;
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        mp[2] = {"a", "b", "c"};
        mp[3] = {"d", "e", "f"};
        mp[4] = {"g", "h", "i"};
        mp[5] = {"j", "k", "l"};
        mp[6] = {"m", "n", "o"};
        mp[7] = {"p", "q", "r", "s"};
        mp[8] = {"t", "u", "v"};
        mp[9] = {"w", "x", "y", "z"};
        vector<string> ans;
        string s="";
        solve(a, 0, N, s, ans);
        return ans;
    }
    
    void solve(int a[], int j, int n, string& s, vector<string>& ans) {
        if(j==n) {
            ans.push_back(s);
            return;
        }
        auto b = mp[a[j]];
        for(int i=0; i<b.size(); i++) {
            s += b[i];
            solve(a, j+1, n, s, ans);
            s.pop_back();
        }
    }
};
