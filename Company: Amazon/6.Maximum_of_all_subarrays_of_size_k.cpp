//6.Maximum of all subarrays of size k
//https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
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
