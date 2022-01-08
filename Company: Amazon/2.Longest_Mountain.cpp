//2.Longest Mountain 
//https://leetcode.com/problems/longest-mountain-in-array/

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size(), ans = 0;
        vector<int> a(n, 0), b(n, 0);
        for(int i=1, j=n-2; i<n || j>=0; i++, j--) {
            if(arr[i] > arr[i-1]) {
                a[i] += a[i-1] + 1;
            }
            if(arr[j+1] < arr[j]) {
                b[j] += b[j+1] + 1;
            }
        }
        for(int i=0; i<n; i++) {
            if(a[i] > 0 && b[i] > 0) {
                ans = max(ans, a[i] + b[i] + 1);
            }
        }
        return ans;
    }
};
