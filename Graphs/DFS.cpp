#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void DFS(int u,const vector<vector<int>>&adj,vector<bool>&visited){
    visited[u]=true;
    cout<<u<<" ";
    for(int v:adj[u]){
        while(!visited[v]){
            DFS(v,adj,visited);
        }
    }
}

void dfs(int start,const vector<vector<int>>&adj){
    vector<bool>visited(adj.size(),false);
    cout<<"DFS:";
    DFS(start,adj,visited);
    cout<<"\n";
}