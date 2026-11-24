#include<iostream>
using namespace std;

int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);

        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
void QuickSort(int a[],int high ,int low){
    if(low<high){
        int p=partition(a,low,high);
        QuickSort(a,low,p-1);
        QuickSort(a,p+1,high);
    }
}
int main(){
    int a[5]={5,2,8,3,1};
    QuickSort(a,0,4);
    cout<<"Sorted array: ";
    for(int i=0;i<5;i++){cout<<a[i]<<" ";}
    return 0;
}
