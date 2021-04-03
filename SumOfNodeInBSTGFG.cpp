Given a Binary Search Tree, find the sum of all leaf nodes. BST has the following property (duplicate nodes are possible):

The left subtree of a node contains only nodes with keys less than the node’s key.
The right subtree of a node contains only nodes with keys greater than or equal to the node’s key.


int sumOfLeafNodes(Node *r ){
    
    if(r->left==NULL && r->right==NULL)
    return r->data;
    else if(r->left!=NULL && r->right==NULL)
    return sumOfLeafNodes(r->left);
    else if(r->left==NULL && r->right!=NULL)
    return sumOfLeafNodes(r->right);
    return sumOfLeafNodes(r->right)+sumOfLeafNodes(r->left);

    
    
     
}