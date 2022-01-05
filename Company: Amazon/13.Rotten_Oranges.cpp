//13.Rotten Oranges
//https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int i=0, j=0, n1=grid.size(), n2=grid[0].size();
        queue<pair<int, int>> q;
        int t=0, c=0;
        for(i=0; i<n1; i++) {
            for(j=0; j<n2; j++) {
                if(grid[i][j] == 1) {
                    c++;
                }
                else if(grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }
        q.push({-1, -1});
        vector<int> a={-1,1,0,0}, b={0,0,-1,1};
        int x=0, y=0;
        while(!q.empty()) {
            i = q.front().first;
            j = q.front().second;
            q.pop();
            if(i>=0 &&j>=0) {
                for(int k=0; k<4; k++) {
                    x = i + a[k];
                    y = j + b[k];
                    if((x>=0 && x<n1) && (y>=0 && y<n2) && grid[x][y]==1) {
                        grid[x][y] = 2;
                        q.push({x, y});
                        c--;
                    }
                }
            }
            else if(!q.empty()) {
                q.push({-1, -1});
                t++;
            }
        }
        return (c>0) ? -1 : t;
    }
};
