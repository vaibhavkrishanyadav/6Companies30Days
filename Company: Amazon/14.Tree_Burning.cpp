//14.Tree Burning 
//https://practice.geeksforgeeks.org/problems/burning-tree/1/

class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        queue<Node*> q, q1;
        map<Node*, Node*> mp;
        map<Node*, int> v;
        q.push(root);
        mp[root] = NULL;
        while(!q.empty()) {
            int n=q.size();
            while(n--) {
                Node* t = q.front();
                q.pop();
                if(t->data == target) {
                    q1.push(t);
                }
                if(t->left) {
                    mp[t->left] = t;
                    q.push(t->left);
                }
                if(t->right) {
                    mp[t->right] = t;
                    q.push(t->right);
                }
            }
        }
        int ans=0;
        v[q1.front()] = 1;
        while(!q1.empty()) {
            ans++;
            int n=q1.size();
            while(n--) {
                Node* t = q1.front();
                q1.pop();
                if(mp[t] != NULL && v[mp[t]] != 1) {
                    q1.push(mp[t]);
                    v[mp[t]] = 1;
                }
                if(t->left && v[t->left] != 1) {
                    q1.push(t->left);
                    v[t->left] = 1;
                }
                if(t->right && v[t->right] != 1) {
                    q1.push(t->right);
                    v[t->right] = 1;
                }
            }
        }
        return ans-1;
    }
};
