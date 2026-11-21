#include<iostream>
using namespace std;

const int MAX =100;
class Stack{
    private : 
        int arr[MAX];
        int top;
    public :
        Stack(){
            top=-1;
        }
        bool isEmpty(){
            return top==-1;
        }
        bool isFull(){
            return top==MAX-1;
        }
        void push(int x){
            if(isFull()){
                cout<<"Stack Overflow\n";
                return;
            }
            arr[++top]=x;
            cout<<"Pushed"<<x;
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack Underflow";
                return;
            }
            cout<<"Poppped"<<arr[top--]<<endl;
        }
        int peek(){
            if(isEmpty()){
                cout<<"Stcak is Empty ";
            }
            return arr[top];
        }
};
int main(){
    Stack s;
    s.push(10);
    s.push(24);
    s.push(20);
    s.push(30);
    cout<<"Element at top\n"<<s.peek();
    s.pop();
    s.pop();
    cout<<"Element at top\n"<<s.peek();
    return ;
}