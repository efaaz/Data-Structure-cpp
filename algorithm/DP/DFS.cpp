#include <iostream>
#include <vector>
using namespace std;

void dfs(int u, vector<int> adj[], vector<bool> &vis)
{
    cout << u << " ";
    vis[u] = true;   

    for (int v : adj[u])
    { 
        if (!vis[v])
        {
            dfs(v, adj, vis); 
        }
    }
}

int main()
{
    const int V = 5; 
    vector<int> adj[V]; 
    vector<bool> vis(V, false);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};
    dfs(0, adj, vis);

    return 0;
}
