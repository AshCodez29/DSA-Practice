#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* tail=nullptr;
void Insert(int x){
    Node* newNode=new Node();
    newNode->data=x;
    if(tail==nullptr){
        tail=newNode;
        tail->next=tail;
        return;
    }
    newNode->next=tail->next;
    tail->next=newNode;
}
void Insert_last(int x){
    Node* newNode=new Node();
    newNode->data=x;
    if(tail==nullptr){
        tail=newNode;
        tail->next=tail;
        return;
    }
    newNode->next=tail->next;
    tail->next=newNode;
    tail=newNode;
}