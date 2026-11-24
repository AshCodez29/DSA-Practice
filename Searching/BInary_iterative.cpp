#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,42,56,78};
    int key=42;
    int low =0,high=4,mid;
    while(low <= high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"KEY FOUND!! at Index :"<<mid; 
            return 0;
        }
        else if (arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"NOT FOUND!";
}