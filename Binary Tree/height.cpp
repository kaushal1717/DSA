int height(struct Node* node){
        // code here
        if(node==NULL){
            return 0;
        }
        int lh=height(node->left);
        int rh=height(node->right);
        return 1+max(lh,rh);
    }