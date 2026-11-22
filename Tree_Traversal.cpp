#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* root = nullptr;
Node* Create_node(int x){
    Node* newNode=new Node();
    newNode->data=x;
    newNode->left=newNode->right=NULL;
    return newNode;
}
void inorder(Node* newNode){
    if(newNode==NULL) return;
    inorder(newNode->left);
    cout<<newNode->data;
    inorder(newNode->right);
}

void preorder(Node* newNode){
    if(newNode==NULL) return;
    cout<<root->data<<" ";
    preorder(newNode->left);
    preorder(newNode->right);
}
void postorder(Node* newNode){
    if(newNode==NULL) return;
    postorder(newNode->left);
    postorder(newNode->right);
    cout<<newNode->data<<" ";
}