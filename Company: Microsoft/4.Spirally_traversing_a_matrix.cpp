//4.Spirally traversing a matrix
//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        int i=0, j=0, n=r-1, m=c-1;
        vector<int> ans;
        while(i<=n && j<=m ) {
            for(int k=j; k<=m; k++) {
                ans.push_back(matrix[i][k]);
            }
            if(++i > n) {
                break;
            }
            for(int k=i; k<=n; k++) {
                ans.push_back(matrix[k][m]);
            }
            if(--m < j){
                break;
            }
            for(int k=m; k>=j; k--) {
                ans.push_back(matrix[n][k]);
            }
            if(--n < i) {
                break;
            }
            for(int k=n; k>=i; k--) {
                ans.push_back(matrix[k][j]);
            }
            j++;
        }
        return ans;
    }
};
