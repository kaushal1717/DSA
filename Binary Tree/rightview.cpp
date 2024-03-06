void recursion(TreeNode *root, int lvl, vector<int> &ans)
    {
        if(root == NULL) return ;
        if(ans.size()==lvl) ans.push_back(root->val);
        recursion(root->right,lvl+1,ans);
        recursion(root->left,lvl+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        recursion(root,0,ans);
            return ans;
    }