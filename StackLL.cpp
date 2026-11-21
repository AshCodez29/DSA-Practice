#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class Stack{
    private:
        Node* top;
    public:
        Stack(){
            top=nullptr;
        }
        ~Stack(){
            while(!isEmpty()){
                pop();
            }
        }
        bool isEmpty(){
            return top==nullptr;
        }
        void push(int x){
            Node* newNode= new Node();
            newNode->data=x;
            newNode->next=top;
            top=newNode;
            cout<<"\nPushed"<< x;
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack OverFlow!!";
            }
            Node* temp=top;
            cout<<"\nPoppped\n"<<temp->data<<endl;
            top=top->next;
            delete temp;
        }
        int peek(){
            if(isEmpty()){
                cout<<"Stack is Emptty!!";
            }
            return top->data;
        }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"TOP ELEMENT \n"<<s.peek()<<endl;
    // s.pop();
    // s.pop();
    cout<<"TOP ELEMENT \n"<<s.peek()<<endl;
    return 1;
}