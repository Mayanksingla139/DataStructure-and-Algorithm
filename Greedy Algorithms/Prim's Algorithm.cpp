#include<iostream>
#include<unordered_map>
#include<limits.h>
#include<list>
using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here.
    // adj List
    unordered_map<int, list<pair<int, int>>> adj;
    for(int i=0; i<g.size(); i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    vector<bool> mst(n+1);
    vector<int> key(n+1);
    vector<int> parent(n+1);
    
    for(int i=0; i<=n; i++){
        mst[i] = false;
        parent[i] = -1;
        key[i] = INT_MAX;
    }
    
    // Algo start from Here
    key[1] = 0;
    parent[1] = -1;
    for(int i=1; i<=n; i++){
        int u;
        int mini = INT_MAX;
      
        // Find Minimum value node
        for(int j=1; j<=n; j++){
            if(mst[j] == false && key[j] < mini){
                u = j;
                mini = key[j];
            }
        }
        
        // Mark Minimum value node as true
        mst[u] = true;
      
        // Check its all adjacent nodes
        for(auto neigh: adj[u]){
            int v = neigh.first;
            int w = neigh.second;
            if(mst[v] == false && w < key[v]){
                key[v] = w;
                parent[v] = u;
            }
        }
    }
    vector<pair<pair<int, int>, int>> ans;
    for(int i=2; i<=n; i++){
        ans.push_back({{parent[i], i}, key[i]});
    }
    return ans;
}
