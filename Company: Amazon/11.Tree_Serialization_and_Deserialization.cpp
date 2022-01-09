//11.Tree Serialization and Deserialization
//https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1

class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> a;
        serializeHelper(root, a);
        return a;
    }
    
    void serializeHelper(Node* root, vector<int>& a) {
        if(!root) {
            a.push_back(-1);
            return;
        }
        a.push_back(root->data);
        serializeHelper(root->left, a);
        serializeHelper(root->right, a);
    }
    
    //Function to deserialize a list and construct the tree.
    int i=0;
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if(A[i] == -1) {
           i++;
           return NULL;
       }
       Node* n = new Node(A[i]);
       i++;
       n->left = deSerialize(A);
       n->right = deSerialize(A);
       return n;
    }

};
