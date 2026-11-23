#include<iostream>
#include<vector>
using namespace std;

int main(){
    int V=4;
    vector<vector<int>>adj(V);
    auto addEdge = [&](int u , int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    };
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,2);
    addEdge(2,3);
    for(int i=0;i<V;i++){
        cout<<i<<":";
        for(int neighbour : adj[i]){
            cout<<neighbour<<" ";
        }
        cout<<"\n";
    }

}