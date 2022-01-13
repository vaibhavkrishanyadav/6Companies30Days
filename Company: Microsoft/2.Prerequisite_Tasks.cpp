//2.Prerequisite Tasks
// https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/

class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<vector<int>> g(N);
	    vector<int> deg(N, 0);
	    for(auto &i: prerequisites) {
	        deg[i.first]++;
	        g[i.second].push_back(i.first);
	    }
	    queue<int> q;
	    int c=0;
	    for(int i=0; i<N; i++) {
	        if(deg[i] == 0) {
	            q.push(i);
	            c++;
	        }
	    }
	    while(!q.empty()) {
	        int i = q.front();
	        q.pop();
	        for(auto &j: g[i]) {
	            if(--deg[j] == 0) {
	                q.push(j);
	                c++;
	            }
	        }
	    }
	    return c==N ? true : false;
	}
};
