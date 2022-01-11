//8.Connect Nodes at Same Level
// https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/

class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       if(!root) {
           return;
       }
       queue<Node*> q;
       q.push(root);
       while(!q.empty()) {
           int n=q.size();
           while(n--) {
               Node* t = q.front();
               q.pop();
               if(n>0) {
                   t->nextRight = q.front();
               }
               else{
                   t->nextRight = NULL;
               }
               if(t->left) {
                   q.push(t->left);
               }
               if(t->right) {
                   q.push(t->right);
               }
           }
       }
    }        
};
