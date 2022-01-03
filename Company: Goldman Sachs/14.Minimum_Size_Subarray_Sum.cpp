//14. Minimum Size Subarray Sum
//https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int i=0, j=0, sum=0, n=nums.length, ans=n+1;
        while(j < n) {
            sum += nums[j];
            if(sum < target) {
                j++;
            }
            else if(sum >= target) {
                while(sum >= target) {
                    ans = Math.min(ans, j-i+1);
                    sum -= nums[i++];
                }
                j++;
            }
        }
        return ans == n+1 ? 0 : ans;
    }
}
