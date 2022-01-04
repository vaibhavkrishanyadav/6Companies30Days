//15.Array Pair Sum Divisibility Problem
//https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        vector<int> count(k, 0);
        for(int &i: nums) {
            count[i % k]++;
        }
        for(int i=0; i<k; i++) {
            if(i==0 && count[0]%2 == 1) {
                return false;
            }
            else if(count[i] != count[(k-i)%k]) {
                return false;
            }
        }
        return true;
    }
};
