void rightView(Node *root)
{
   // Your Code here
   queue <Node* > q;
   if(!root) return ;
   q.push(root);
   while(!q.empty())
   {
       int sz = q.size();
       Node* t;
       while(sz--)
       {
        t= q.front();
        q.pop();
        if(t->left)
        q.push(t->left);
        if(t->right)
        q.push(t->right);
       }
       cout<< t->data <<" ";
   } 
}