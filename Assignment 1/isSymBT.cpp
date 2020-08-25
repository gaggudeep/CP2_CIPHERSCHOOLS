bool isSym(TreeNode *l, TreeNode *r)
    {
            if(l == NULL && r == NULL)
                return true;
            if((l == NULL && r != NULL) ||
               (r == NULL && l != NULL) ||
               l->val != r->val)
                return false;
            
        return isSym(l->left, r->right) &&
                isSym(l->right, r->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return isSym(root->left, root->right);
    }