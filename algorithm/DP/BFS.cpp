#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int V, vector<int> l[])
{

    queue<int> Q;
    vector<bool> vis(V, false);

    Q.push(0);
    vis[0] = true;

    while (Q.size() > 0)
    {
        int u = Q.front();
        Q.pop();

        cout << u << " ";

        for (int v : l[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                Q.push(v);
            }
        }
    }
}

int main()
{
    int V = 5;

    vector<int> l[V];
    l[0] = {1, 2};
    l[1] = {0, 3};
    l[2] = {0, 4};
    l[3] = {1};
    l[4] = {2};
    bfs(V, l);
    return 0;
}
