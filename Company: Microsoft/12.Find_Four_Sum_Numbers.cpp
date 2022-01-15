//12.Find All Four Sum Numbers
// https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(arr.begin(), arr.end());
        int n = arr.size(), sum;
        for (int i=0; i<n-3; i++) {
            for (int j=i+1; j<n-2; j++) {
                int x = j+1, y = n-1;
                while (x < y) {
                    sum = arr[i]+arr[j]+arr[x]+arr[y];
                    if (sum == k) {
                        s.insert({arr[i], arr[j], arr[x], arr[y]});
                        x++, y--;
                    }
                    else if (sum > k) {
                        y--;
                    }
                    else {
                        x++;
                    }
                }
            }
        }
        for(auto &i: s) {
            ans.push_back(i);
        }
        return ans;
    }
};
