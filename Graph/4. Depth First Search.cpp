#include <iostream>
#include <vector>
using namespace std;

int vis[100];
vector<int>adj[100];

void dfs(int start)
{
    vis[start]=true;
    for( int i=0 ; i<adj[start].size() ; i++ )
        if(!vis[adj[start][i]])
            dfs(adj[start][i]);
}

int main()
{
    int m,n,x,y;
    cin >> n >> m;

    for( int i=0 ; i<m ; i++ )
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int connected_component=0;
    for( int i=1 ; i<=n ; i++ )
    {
        if(!vis[i]){
            dfs(i);
            connected_component++;
        }
    }
    cout << "Connected Component = " << connected_component << endl;
    return 0;
}
