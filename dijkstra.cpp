//to store weighted graph using adjacency list and use dijkstra algorithm.

#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
using namespace std;

void dijkstra(vector<pair<int,int>>adj[],int cost[],int s,int v){
   // priority_queue<int>pq; //by default maxheap
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; //for making it minheap
   pq.push({0,s});
   while(!pq.empty()){
     auto t=pq.top();
     int c= t.first;
     int u=t.second;

     for(auto it : adj[u]){
        int v=it.first;
        int weight=it.second;

        if(cost[u]+weight<cost[v]){
            cost[v]=cost[u]+weight;
        }

     }
   }
}

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
   cout<<"enter source node";
   int s;
   cin>>s;
   int cost[v+1];
   for(int i=0;i<=v;i++){
    cost[i]=INT_MAX;
   }
   cost[s]=0;
   dijkstra(adj,cost,s,v);
}