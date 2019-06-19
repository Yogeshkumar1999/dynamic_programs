#include <iostream>
using namespace std;

int findNode(Node* root, int n1, int n2){
    int num = root->data;
    Node* root1 = root;
    while(root1 != NULL){
        if(n1 < root1->data < n2 || n2 < root1 < n1){
            return root->data;
        }
        if(n1 == root1->data || n2 == root1->data){
            return root1->data;
        }
        if( n1 < root1->data || n2< root1->data){
            root1 = root1->left;
            num = root1-->data;
        }
        else{
            root1 = root->right;
            num = root1->data;
        }
        
    }
}

int main() {
	cout<<"GfG!";
	return 0;
}