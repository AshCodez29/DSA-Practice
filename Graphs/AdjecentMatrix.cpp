#include<iostream>
#include<vector>
using namespace std;

int main(){
    int V=4;
    vector<vector<int>>adj(V,vector<int>(V,0));
    auto addEdge=[&](int u , int v){
        adj[u][v]=1;
        adj[v][u]=1;
    };
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,2);
    addEdge(2,3);
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n ";
    }
}