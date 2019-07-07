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
  //Your code here
  queue<Node* > q;
  q.push(node);
  while(1)
 {
    int size = q.size();
    if(size == 0)
    break;
    while(size > 0){
     
     Node* temp = q.front();
     cout<<temp->data<<" ";
     q.pop();
     if(temp->left != NULL)
          q.push(temp->left);
     
     if(temp->right != NULL)
        q.push(temp->right);
        
        size--;
  
 }
 cout<<'$'<<" ";
 }
}
