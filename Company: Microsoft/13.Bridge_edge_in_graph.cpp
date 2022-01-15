//13.Bridge edge in a graph
// https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1

class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        for(auto i= adj[c].begin(); i != adj[c].end(); i++) {
            if(*i == d) {
                adj[c].erase(i);
                i--;
            }
        }
        for(auto i= adj[d].begin(); i != adj[d].end(); i++) {
            if(*i == c) {
                adj[d].erase(i);
                i--;
            }
        }
        vector<int> v(V, 0);
        queue<int> q;
        q.push(c);
        v[c]=1;
        while(!q.empty()) {
            int i = q.front();
            q.pop();
            for(auto &a: adj[i]) {
                if(!v[a]) {
                    v[a] = 1;
                    q.push(a);
                }
            }
        }
        return !v[d];
    }
};
