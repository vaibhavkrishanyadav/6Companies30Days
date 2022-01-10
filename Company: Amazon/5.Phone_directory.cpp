//5.Phone directory
//https://practice.geeksforgeeks.org/problems/phone-directory4628/1/

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> ans;
        set<string> st;
        for(int i=0; i<n; i++) {
            st.insert(contact[i]);
        }
        vector<string> cont(st.begin(), st.end()), a;
        for(int i=0; i<s.size(); i++) {
            a.clear();
            for(int j=0; j<cont.size(); j++) {
                if(cont[j][i] == s[i]) {
                    a.push_back(cont[j]);
                }
            }
            cont = a;
            if(a.empty()) {
                a.push_back("0");
            }
            ans.push_back(a);
        }
        return ans;
    }
};
