/* A binary tree Node
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
//You are required to complete this method


void levelOrder(Node* node)
{
    if(node == NULL){
     return;
 }
 queue<Node* > q;
 
 q.push(node);
 while(!q.empty()){
     
     Node* node = q.front();
     cout<<node->data<<" ";
     q.pop();
     if(node->left != NULL)
     q.push(node->left);
     
     if(node->right != NULL)
     q.push(node->right);
     
     
     
     
 }
 
}
