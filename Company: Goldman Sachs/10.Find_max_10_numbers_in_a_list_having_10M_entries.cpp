//10. Find max 10 numbers in a list having 10M entries.
//

class Solution {
public:
    vector<int> findMax10Numbers(vector<long long>& nums) {
        long long n = nums.size()-1;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        while(n>=0) {
            if (q.size() < 10) {
                q.push(nums[n]);
            }
            else if (q.size() == 10 && q.top() < nums[n]) {
                q.pop();
                q.push(nums[n]);
            }
            n--;
        }
        vector<int> ans(10);
        int i=9;
        while(!q.empty()) {
            ans[i--] = q.top();
            q.pop();
        }
        return ans;;
    }
};
