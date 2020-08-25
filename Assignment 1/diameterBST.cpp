int d;
    int dia(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int lh = dia(root->left);
        int rh = dia(root->right);
        d = max(d, lh + rh + 1);

        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {

        d = 1;
        dia(root);
        return d - 1;
    }
