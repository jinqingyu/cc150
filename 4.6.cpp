
TreeNode* getNext(TreeNode* node)
{
  if(!node) return NULL;
  TreeNode* res = NULL;
  if(node->right){
    res = node->right;
    while(res->left){
      res = res->left;
    }
    return res;
  } else {
    res = node->parent;
    while(res && res->right == node){
      node = res;
      res = res->parent;
    }
    return res;
  }
}
