Level Order Traversal-
vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int> ans;
      if(!root) return ans;
      queue<Node* > q;
      q.push(root);
      while(!q.empty())
      {
          Node* t = q.front();
          ans.push_back(t->data);
          if(t->left) q.push_back(t->left);
          if(t->right) q.push_back(t->right);
          q.pop();
      }
      return ans;
    }


Reverse Level Order Traversal -

std::vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<Node*> ans;
    if(!root) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* t = q.front();
          ans.push_back(t->data);
          
          if(t->right) q.push_back(t->right);
          if(t->left) q.push_back(t->left);
          q.pop();
    }
    reverse(ans.begin(),ans.end());
    for(int i=o; i<ans.size() ; i++)
    cout<<ans[i]<<" ";
    
}