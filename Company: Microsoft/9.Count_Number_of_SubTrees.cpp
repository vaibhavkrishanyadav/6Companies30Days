//9.Count Number of SubTrees having given Sum
// https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/

void dfs(Node* root, int x, int &c) {
    if(!root) {
	    return;
	}
	if(root->left) {
	    dfs(root->left, x, c);
	    root->data += root->left->data;
	}
	if(root->right) {
	    dfs(root->right, x, c);
	    root->data += root->right->data;
	}
	if(root->data == x) {
	    c++;
	}
}

int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int ans = 0;
	dfs(root, X, ans);
	return ans;
}
