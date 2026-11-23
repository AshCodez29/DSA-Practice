#include<iostream>
using namespace std;

void Swap(int &x,int &y){
    int t=x;
    x=y;
    y=t;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                Swap(arr[j],arr[j+1]);
            }
        }
    }
}
void Display(int arr[],int n){
    for(int i=0;i< n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int orig[]={10,23,43,21,90,89};
    int n=6;
    int arr[6];
    bubbleSort(orig,n);
    Display(arr,n);
}

    

