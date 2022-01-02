//7. Find the kid which gets the damaged toy
//https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        while(--M) {
            K++;
            if(K == N+1) {
                K = 1;
            }
        }
        return K;
    }
};
