def lca(root, v1, v2):
  #Enter your code here
  if v1>v2:
    v1 , v2 = v2 , v1;
    
  while True:
    if v1 < root.info and v2 < root.info:
        root = root.left
    elif v1 > root.info and v2 > root.info:
        root = root.right
        #LCA
    else:
        return root