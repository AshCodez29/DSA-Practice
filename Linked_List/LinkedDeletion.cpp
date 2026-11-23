#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head=NULL;
void Delete(){
    if(head==nullptr) return ;
    Node* temp=head;
    head=head->next;
    delete temp;
}
void Delete_last(){
    if(head==nullptr) return ;
    Node* temp=head;
    if(head->next==nullptr) {
        delete head;
        head->next=nullptr;
    }
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}
void Delete_at_value(int val){
    if(head==nullptr) return ;
    //if val at head
    if(head->data==val){
        Node* temp= head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp1=head;
    while(temp1->next!=nullptr&& temp1->next->data!=val){
        temp1=temp1->next;
    }
    if(temp1->next!=nullptr){
        Node* temp=temp1->next;
        temp->next=temp1->next->next;
        delete temp;
    }
}