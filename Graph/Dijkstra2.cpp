#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

int n,m;
vector< vector<pair<int,int> > >adj;
vector<int>nodeW, par;

void Dijkstra(int n)
{
    priority_queue< pair<int,int> ,
            vector< pair<int,int> > ,
           greater< pair<int,int> > >pq;

    pq.push( {0,n} );

    while(!pq.empty())
    {
        int cost = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for( int i=0 ; i<adj[node].size() ; i++ )
        {
            int cur_cost = cost + adj[node][i].second;
            int cur_node = adj[node][i].first;

            if( cur_cost<nodeW[cur_node] )
                nodeW[cur_node] = cur_cost , par[cur_node] = node , pq.push({cur_cost,cur_node});
        }
    }

}

int main()
{
    cin >> n >> m;
    adj.resize(n+1);
    nodeW.resize(n+1,INT_MAX);
    par.resize(n+1,-1);

    for( int i=0 ; i<n ; i++ )
    {
        int x,y,z;
        cin >> x >> y >> z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }

    Dijkstra(1);

    for( int i=2 ; i<=n ; i++ )
        cout << nodeW[i] << " \n"[i==n];

    return 0;
}
