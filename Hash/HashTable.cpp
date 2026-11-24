#include<iostream>
using namespace std;
const int MAX=10;
int main(){
    int table[MAX];
    for(int i=0;i<MAX;i++){
        table[i]=-1;
    }
    int keys[]={13,3,4,2,9,8};
    for(int key:keys){
        int index=MAX%10;
    
        while(table[index]!=-1){
            index=(index+1)%MAX;
        }
        table[index]=key;
    }
    for (int i = 0; i < MAX; i++) {
        cout << i << " -> " << table[i] << "\n";
    }
}