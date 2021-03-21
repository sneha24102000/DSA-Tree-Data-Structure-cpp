int maxValue(Node* root)
{
    // Code here
    if(root==NULL)
    {
        cout<<"Tree is empty";
        return -1;
    }
    while(root->right!=NULL)
    {
        root = root->right;
    }
    return root->data;
    
}
