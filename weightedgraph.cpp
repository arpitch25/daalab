//to store weighted graph using adjacency list.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int v,e;
    cout<<"enter the no of vertices,edges";
    cin>>v>>e;
    vector<pair<int,int>>adj[v+1];
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i=0;i<v;i++){
        cout<<i<<": ";
        for(auto it: adj[i]){
            cout<<it.first<<"  "<<it.second<<" , ";
        }
        cout<<endl;
    }

}