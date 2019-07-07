/* A binary tree node
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
/* If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL. Else if left subtree contains any 
   of them return pointer to left.*/
Node * lca(Node* root ,int n1 ,int n2 )
{
   //Your code here 
   Node *lnode, *rnode;
   if(root == NULL){
       return NULL;
   }
   if(root->data == n1 || root->data == n2){
       return root;
   }
   
   lnode = lca(root->left, n1, n2);
   rnode = lca(root->right, n1, n2);
   
   if(lnode&&rnode) 
return root ;

return !lnode?rnode:lnode;
   
   
   
   
   
}