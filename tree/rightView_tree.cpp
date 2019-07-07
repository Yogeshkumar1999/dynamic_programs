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
// Should print right view of tree
void rightView(Node *root)
{
   queue<Node* > q;
       q.push(root);
   while(1){
       
       int size = q.size();
       if(size == 0)
        break;
        int count = q.size();
        int c = 0;
        while(size>0){
            c++;
            Node* temp = q.front();
            q.pop();
            if(count == c){
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
