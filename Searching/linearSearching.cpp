#include<iostream>
using namespace std;
int Linearsearch(int a[],int target){
    for(int i=0;i<5;i++){
        if(a[i]==target){
            return i;
        }
        else{
            return -1;
        }
    }
}
int main(){
    int a[5]={23,43,56,12,90};
    int target=43;
    cout<<Linearsearch(a,target);
}


