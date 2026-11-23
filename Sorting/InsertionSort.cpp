#include<iostream>
using namespace std;

void Swap(int &x,int &y){
    int t=x;
    x=y;
    y=t;
}
void Display(int arr[],int n){
    for(int i=0;i< n;i++){
        cout<<arr[i]<<" ";
    }
}
void InsertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main(){
    int a[]={10,20,43,19,34,90,23};
    int n=7;
    InsertionSort(a,n);
    cout<<"Sorted Array :"<<endl;
    Display(a,n);
    return 0;
}