//User function Template for C++
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
void postOrder(Node* root)
{
  // Your code here
  if(root){
      postOrder(root->left);
      postOrder(root->right);
      cout<<root->data<<" ";
  }
}
