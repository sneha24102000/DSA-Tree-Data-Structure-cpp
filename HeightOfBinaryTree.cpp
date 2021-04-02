Height Of a Binary Tree

int calcHeight(Node* root)
{
  if(root==NULL)
     {
          return 0;
      }
int lHeight = calcHeight(root->left);
int rHeight = calcHeight(root->right);
return max(lHeight,rHeight) + 1;
}