/* A binary tree node has data, pointer to left child
   and a pointer to right child  
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
void preorder(Node* root)
{
  // Your code here
  if(root){
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
  }
}