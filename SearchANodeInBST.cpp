bool search(Node* root, int x)
{
    //Your code here
    if (root == NULL)
        return false;
 
    if (root->data == x)
        return true;
 
    /* then recur on left sutree */
    bool res1 = search(root->left, x);
    // node found, no need to look further
    if(res1) return true; 
 
    /* node is not found in left, 
    so recur on right subtree */
    bool res2 = search(root->right, x);
 
    return res2;
    
    
    
}
