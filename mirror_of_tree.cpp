#include <iostream>
using namespace std;

Node* mirror(Node* root){
    if(root != NULL){
        Node* nn = new Node(root->data);
        nn->left = mirror(root->right);
        nn->right = mirror(root->left);
        return nn;
    }
    return NULL;
}

int main() {

	return 0;
}