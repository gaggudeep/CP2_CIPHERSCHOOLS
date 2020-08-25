TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
	    if (root == p || root == q || root == NULL) return root;
	    TreeNode *left = lowestCommonAncestor(root->left, p, q), *right = lowestCommonAncestor(root->right, p, q);
	    return left && right ? root : left ? left : right;
    }
