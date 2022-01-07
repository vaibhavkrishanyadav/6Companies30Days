//3.IPL 2021 - Match Day 2
//https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        int i=0, j=0;
        vector<int> ans;
        multiset<int> s;
        while(j<n) {
            s.insert(arr[j++]);
            if(j-i == k) {
                ans.push_back(*s.rbegin());
                s.erase(s.find(arr[i]));
                i++;
            }
        }
        return ans;
    }
};
