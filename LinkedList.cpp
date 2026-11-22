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
    newNode->next=head;
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