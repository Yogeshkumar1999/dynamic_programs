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
// A wrapper over leftViewUtil()
void leftView(Node *root)
{
   // Your code here
   queue<Node* > q;
       q.push(root);
   while(1){
       
       int size = q.size();
       if(size == 0)
        break;
        int count = 0;
        while(size>0){
            Node* temp = q.front();
            q.pop();
            if(count == 0){
                cout<<temp->data<<" ";
                count++;
            }
            
            if(temp->left != NULL)
                q.push(temp->left);
            if(temp->right != NULL)
                q.push(temp->right);
                
                size--;
        }
   }
}
