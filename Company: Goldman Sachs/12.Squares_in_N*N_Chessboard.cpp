//12. Find total number of Squares in a N*N chessboard
//https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        vector<long long> a(N+1, 0);
        for(long long i=1; i<=N; i++) {
            a[i] = i*i + a[i-1];
        }
        return a[N];
    }
};
