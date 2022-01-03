//13.Decode the string
//https://practice.geeksforgeeks.org/problems/decode-the-string2444/1

class Solution{
public:
    string decodedString(string s){
        // code here
        int n=0;
        string ans = "";
        stack<string> s1;
        stack<int> s2;
        for(int i=0; i<s.size(); i++) {
            if(isdigit(s[i])) {
                n = n*10 + s[i]-'0';
            }
            else {
                if(s[i] == '[') {
                    s1.push(ans);
                    ans = "";
                    s2.push(n);
                    n=0;
                }
                else if(s[i] == ']') {
                    int j=s2.top();
                    s2.pop();
                    j--;
                    string t = ans;
                    while(j--) {
                        ans += t;
                    }
                    ans = s1.top() + ans;
                    s1.pop();
                }
                else {
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};
