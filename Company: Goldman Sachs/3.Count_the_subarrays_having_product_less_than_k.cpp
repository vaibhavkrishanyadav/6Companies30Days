//3. Count the subarrays having product less than k
//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long ans=0, i=0, j=0, x=1;
        while(j<n) {
            x *= a[j];
            while(i <= j && x >= k) {
                x /= a[i];
                i++;
            }
            ans += j-i+1;
            j++;
        }
        return ans;
    }
};
