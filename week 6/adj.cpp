#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int e,v;
cout<<"enter the no of edges";
cin>>e;
cout<<"enter the no of vertex";
cin>>v;
int graph[v+1][v+1];
memset(graph, 0, sizeof(graph));
for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    graph[u][v]=1;
    graph[v][u]=1;
}

for(int i=1;i<=v;i++){
   cout<<i<<":";
   for(int j=1;j<=v;j++){
    if(graph[i][j]==1){
        cout<<j<<" ";
    }
   }
   cout<<endl;
}  
   cout<<"bfs";
    queue<int>q;
    int visited[v+1]={0};
    int s;
    cin>>s;
    q.push(s);
    visited[s]=1;

    while(!q.empty()){
        int f=q.front();
        q.pop();
        cout<<f;
    for(int i=1;i<=v;i++){
        if(graph[f][i]==1&& visited[i]==0){
            q.push(i);
            visited[i]=1;
        }}}


}
