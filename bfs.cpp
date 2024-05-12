#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;

void listify(vector<vector<int>>& edges,int n){
    adj.resize(n);
    for(auto x:edges){
        int u = x[0];
        int v = x[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(auto x:adj){
        for(int i = 0;i<x.size();i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
}

void bfs(){
    return;
}

int main() {
    vector<vector<int> > edges;
    int n = 4;
    edges.push_back(vector<int> {0, 1});
    edges.push_back(vector<int> {0, 2});
    edges.push_back(vector<int> {1, 3});
    edges.push_back(vector<int> {2, 4});
    edges.push_back(vector<int> {2, 5});
    listify(edges,n);
    return 0;
}
