#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* root = NULL;

Node* search(int value){
    if(root==NULL) return ;
    Node* temp = root;
    while(temp!=NULL&&temp->data!=value){
        if(value<temp->data){
            temp=temp->left;
        }
        if(value>temp->data){
            temp=temp->right;
        }
    }
    return temp;
}
void Insert(int value){
    Node* node=new Node();
    node->data=value;
    node->left=node->right=NULL;
    if(root==NULL){
        root=node;
        return;
    }
    Node* temp = root;
    while(temp!=NULL&&temp->data!=value){
        if(value<temp->data){
            if(temp->left==nullptr){
                temp->left=node;
                return;
            }
            temp=temp->left;
        }
        if(value>temp->data){
            if(temp->right==nullptr){
                temp->right=node;
                return;
            }
            temp=temp->right;
        }
    }
}