#include<iostream>
using namespace std;

void Swap(int &x,int &y){
    int t=x;
    x=y;
    y=t;
}
void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i)
            Swap(a[i],a[min]);
    }
}
void Display(int arr[],int n){
    for(int i=0;i< n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[]={10,20,43,19,34,90,23};
    int n=7;
    selectionSort(a,n);
    cout<<"Sorted Array :"<<endl;
    Display(a,n);
    return 0;
}