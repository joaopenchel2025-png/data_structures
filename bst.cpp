#include<iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* newNode (int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert (node** root, int data) {
    if(root == NULL){
        *root = newNode(data);
        return;
    } else if ( data <= (*root)->data ) {
        (*root)->left = newNode(data);
        return;
    } else {
        (*root)->right   = newNode(data);
        return;
    }
}

int main () {
    node* root = NULL;
    printf("\n\nroot Stack address: %p %p\n\n", &root, root);
    
    // cout << "Stack memory address for the variable root: ";
    // insert (&root,15);
    // insert (&root,10);
    // insert (&root,20);