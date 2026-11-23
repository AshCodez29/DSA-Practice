#include<iostream>
using namespace std;

const int MAX=100;
class QueueOps{
private:
    int arr[MAX];
    int front;
    int rear;
public:
    QueueOps(){
        front =-1;
        rear =-1;
    }
    bool isEmpty(){
        return front==-1 || front>rear;
    }
    bool isFull(){
        return rear==MAX-1;
    }
    void enqueue(int x){
        if(isFull()){
            cout<<"Stack Overflow!!\n"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        arr[++rear]=x;
        cout<<"Enqueued\n"<<x;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Stack Underflow\n"<<endl;
            return;
        }
        cout<<"Dequeued\n"<<arr[front++];
    }
    int peek(){
        if(isEmpty()){
            cout<<"Stack Underflow\n"<<endl;
            return -1;
        }
        return arr[front];
    }

};
int main(){
    QueueOps q;
    q.enqueue(10);
    q.enqueue(13);
    q.enqueue(23);
    q.enqueue(34);
    cout<<"Top Element\n"<<q.peek();
    q.dequeue();
    q.dequeue();
    cout<<"Top Element\n"<<q.peek();
    return 1;
}
