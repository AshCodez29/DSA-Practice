#include<iostream>
using namespace std;
int BinarySearch(int a[],int low,int high,int key){
    if(low>high) return 0;
    int mid=(low+high)/2;
    if(a[mid]==key){
       return mid;
    }
    else if(a[mid]<key){
        return BinarySearch(a,mid+1,high,key);
    }
    else 
         return BinarySearch(a,low,mid-1,key);

}
int main(){
    int a[5]={10,20,42,56,78};
    int key=42;
    int result = BinarySearch(a,0,4,key);
    if (result==-1){
        cout<<"NOT FOUND!";
    }
    else {
        cout<<"FOUND at INDEX!: "<<result;
    }

}