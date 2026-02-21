# student={
#     "country":"capital",
#     "india":"delhi",
#     "france":"paris"
# }
# print("\n keys:",student.keys())
# #wap to find factorial of n using function 
def digit(num):
    p = 1
    while num > 0:
        digit = num % 10
        p = p * digit
        num = num // 10
    return p

n = int(input("Enter the num: "))
print(digit(n))


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool detectCycle(vector<vector<int>> &graph, int s, int visited[], int recStack[], int v){
    visited[s] = 1;
    recStack[s] = 1;

    for(int i = 1; i <= v; i++){
        if(graph[s][i] == 1){
            if(visited[i] == 0){
                if(detectCycle(graph, i, visited, recStack, v))
                    return true;
            }
            else if(recStack[i] == 1){
                return true;
            }
        }
    }

    recStack[s] = 0;
    return false;
}

void dfs(vector<vector<int>> &graph, int s, int visited[], int v){
    cout << s << " ";
    visited[s] = 1;

    for(int i = 1; i <= v; i++){
        if(graph[s][i] == 1 && visited[i] == 0){
            dfs(graph, i, visited, v);
        }
    }
}

int main(){
    int v, e;
    cin >> v >> e;

    vector<vector<int>> graph(v+1, vector<int>(v+1, 0));

    for(int i = 0; i < e; i++){
        int u, w;
        cin >> u >> w;
        graph[u][w] = 1;   // directed edge
    }

    int visited[v+1], recStack[v+1];
    memset(visited, 0, sizeof(visited));
    memset(recStack, 0, sizeof(recStack));

    int start;
    cin >> start;

    cout << "DFS Traversal: ";
    dfs(graph, start, visited, v);

    memset(visited, 0, sizeof(visited));
    memset(recStack, 0, sizeof(recStack));

    if(detectCycle(graph, start, visited, recStack, v))
        cout << "\nCycle Detected";
    else
        cout << "\nNo Cycle";

    return 0;
}

