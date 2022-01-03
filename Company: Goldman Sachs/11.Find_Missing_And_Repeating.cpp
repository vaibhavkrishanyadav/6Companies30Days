//11. Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing 
//    and one number 'B' occurs twice in array. Find these two numbers.
//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans = new int[2];
        vector<int> a(n+1,0);
        for(int i=0; i<n; i++) {
            a[arr[i]]++;
        }
        for(int i=1; i<=n; i++) {
            if(a[i] == 2) {
                ans[0] = i;
            }
            if(a[i] == 0) {
                ans[1] = i;
            }
        }
        return ans;
    }
};
