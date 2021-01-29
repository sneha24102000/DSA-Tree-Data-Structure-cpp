void mirror(Node* root)

{
     // Your Code Here
     if(!root) return ;
     mirror(root->left);
     mirror(root->right);
     swap(root->left,root->right);
}