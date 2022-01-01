//1. Given an array of strings, return all groups of strings that are anagrams.
// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<string_list.size(); i++) {
            string s = string_list[i];
            sort(s.begin(), s.end());
            mp[s].push_back(string_list[i]);
        }
        vector<vector<string>> ans;
        for(auto i: mp) {
            ans.push_back(i.second);
        }
        return ans;
    }
};
