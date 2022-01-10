//7.Unit Area of largest region of 1's
// https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/

class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int ans=0, c=0;
        int n=grid.size(), m=grid[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1) {
                    c = dfs(grid, i, j);
                    ans = max(ans, c);
                }
            }
        }
        return ans;
    }
    
    int dfs(vector<vector<int>>& grid, int i, int j) {
        int n=grid.size(), m=grid[0].size();
        if(i<0 || j<0 || i==n || j==m || grid[i][j] == 0) {
            return 0;
        }
        grid[i][j]=0;
        int ans=1;
        vector<int> a={-1, -1, -1, 0, 1, 1, 1, 0}, b={-1, 0, 1, 1, 1, 0, -1, -1};
        for(int k=0; k<8; k++) {
            ans += dfs(grid, i+a[k], j+b[k]);
        }
        return ans;
    }
};
