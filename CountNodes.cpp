int countNodes(Nodes* root)
{
  if(root==NULL)
   {
       return 0;
    }
return countNodes(root->left) + countNodes(root->right) + 1;
}