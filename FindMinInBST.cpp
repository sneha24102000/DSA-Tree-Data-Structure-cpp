int minValue(Node* root)
{
    // Code here
    if(root==NULL)
    {
        cout<<"Tree is empty";
        return -1;
    }
    while(root->left!=NULL)
    {
        root = root->left;
    }
    return root->data;
    
}
