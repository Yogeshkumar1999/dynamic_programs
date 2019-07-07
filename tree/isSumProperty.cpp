/*Complete the function below
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
int isSumProperty(Node *node)
{
 // Add your code here
 if(node == NULL){
     return NULL;
 }
 
 if(node->left && node->right && node->data == (node->left->data + node->right->data)){
     isSumProperty(node->left);
     isSumProperty(node->right);
     return 1;
 }
 return 0;
 
}