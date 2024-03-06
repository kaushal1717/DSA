int height(struct Node* node, int &diameter){
        // code here
        if(node==NULL){
            return 0;
        }
        int lh=height(node->left,diameter);
        int rh=height(node->right,diameter);
        diameter = max(diameter,lh+rh+1);
        return 1+max(lh,rh);
    }
    int diameter(Node* root) {
        // Your code here
        int diameter=0;
        height(root,diameter);
        return diameter;
        
    }