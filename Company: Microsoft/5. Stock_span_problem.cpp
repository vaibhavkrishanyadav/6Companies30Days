//5. Stock span problem
// https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       int i=0;
       vector<int> ans(n, 1);
       stack<pair<int, int>> s;
       s.push({price[i++], 1});
       while(i<n) {
           int a=0;
           while(!s.empty() && s.top().first <= price[i]) {
               a += s.top().second;
               s.pop();
           }
           ans[i] += a;
           s.push({price[i], a+1});
           i++;
       }
       return ans;
    }
};
