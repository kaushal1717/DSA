void recursion(Node *root,int lvl, vector<int> &ans)
{
    if (root==NULL)
    {
        return ;
    }
    if(ans.size()==lvl)
    {
        ans.push_back(root->data);
    }
    recursion(root->left,lvl+1,ans);
    recursion(root->right,lvl+1,ans);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   recursion(root,0,ans);
   return ans;
}