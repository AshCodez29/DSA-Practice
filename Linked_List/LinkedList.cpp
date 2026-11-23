#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head=NULL;

void Linkedlist(int x){
    Node* newNode = new Node();
    newNode->data=x;
    newNode->next=NULL;
    head=newNode;
}
void Insert_last(int x){
     Node* newNode = new Node();
    newNode->data=x;
    newNode->next=head;
    if(head==NULL){
        head = newNode;
    }
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void Insert_Position(int x,int pos){
    Node* newNode = new Node();
    newNode->data=x;
    if(pos==1){
        newNode->next=head;
        head=newNode;
    }
    Node* temp=head;
    for(int i=0;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if (temp == NULL) {
        cout << "Position " << pos << " out of range!\n";
        delete newNode;                  
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;

}
void PrintList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int main(){
    Linkedlist(20);
    Linkedlist(34);
    Insert_last(78);
    PrintList();

}   