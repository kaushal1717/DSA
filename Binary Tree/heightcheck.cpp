int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int lh=height(node->left);
        int rh=height(node->right);
        if(lh==-1||rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1)
            return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return height(root)!=-1;      
    }