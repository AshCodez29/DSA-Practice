#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* root = nullptr;
Node* Create_Node(int x){
    Node* newNode=new Node();
    newNode->left=newNode->right=NULL;
    return newNode;
}
void level_order(Node* root){
    if(root==nullptr) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* current = q.front();
        q.pop();
        cout<<current->data<<" ";
        if(current->left!=nullptr){
            q.push(current->left);
        }
        if(current->right!=nullptr){
            q.push(current->right);
        }
    }
}