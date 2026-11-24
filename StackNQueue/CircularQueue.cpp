#include<iostream>
using namespace std;
const int MAX=100;
class Queue{
    private:
        int arr[MAX];
        int front;
        int rear;
        int count;
    public:
        Queue(){
            front=0;
            rear=-1;
            count=0;
        }
        bool isEMpty(){
            return count==0;
        }
        bool isFull(){
            return count==1;
        }
        void push(int x){
            if(isFull()){
                cout<<"QUEUE OVERFLOW\n";
            }
            rear=(rear+1)%MAX;
            arr[rear++]=x;
            cout<<"Pushed!\n"<<x;
        }
        void pop(){
            if(isEMpty()){
                cout<<"QUEUE UNDERFLWO\n";
            }
            front=(front+1)%MAX;
            cout<<"DEQUED!!\n"<<arr[front++];
        }
        int peek(){
             if(isEMpty()){
                cout<<"QUEUE UNDERFLWO\n";
                return -1;
            }
            return arr[front];
            
        }

};
int main(){
    Queue q;
    q.push(10);
    q.push(45);
    q.push(34);
    q.push(32);
    cout<<"QUEUE : "<<q.peek();
    q.pop();
    q.pop();
    cout<<"QUEUE : "<<q.peek();

    
}