//11.String Amendment
//https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1

class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string ans;
        for(int i=0; i<s.size(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                if(i != 0) {
                    ans += ' ';
                }
                ans += s[i]-'A'+'a';
            }
            else {
                ans += s[i];
            }
        }
        return ans;
    }
};
