#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void Bfs(int start,const vector<vector<int>>&adj){
    int V = adj.size();
    vector<bool>Visited(V,false);
    queue<int> q;
    Visited[start]=true;
    q.push(start);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            while(!Visited[v]){
                Visited[v]=true;
                q.push(v);
            }
        }
    }

}