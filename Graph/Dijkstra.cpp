
//     ____     _____         _____     ____     ___  ___   ____
//    / __ \   / ____|       / ____|   / __ \   |   \/   |   ||
//   / /__\ \  \____ \  ---  \____ \  / /__\ \  | |\__/| |   ||
//  /_/    \_\ |_____/       |_____/ /_/    \_\ |_|    |_|  _||_

//  Time   : 05-10-2021 | 23:17:32
//  Problem -> Cf/ 20C - Dijkstra

#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

#define pb push_back
#define int long long
#define inf LLONG_MAX
const int32_t N = 1e5+5;
vector<pair<int,int>> g[N];
int dis[N];
int32_t par[N];
bool vis[N];

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for( int i=0 ; i<m ; i++ )
    {
        int x,y,z;
        cin >> x >> y >> z;
        g[x].pb({y,z});
        g[y].pb({x,z});
    }

    for( int i=1 ; i<=n ; i++ )
        dis[i] = inf, par[i]=-1;
    

    priority_queue< pair<int,int>, 
            vector< pair<int,int>>,  
           greater< pair<int,int>> >pq;

    pq.push({0,1});
    dis[1] = 0;
    par[1]=-1;

    while(!pq.empty()){
        auto [cost, node] = pq.top(); pq.pop();

        if(vis[node]) continue;
        vis[node]=1;

        for(auto [curNode,curCost] : g[node])
        {
            curCost += cost;

            if(curCost < dis[curNode])
            {
                dis[curNode] = curCost;
                par[curNode] = node;
                pq.push({curCost,curNode});
            }
        }
    }

    if(dis[n]==inf){
        cout << -1 << endl;
        return 0;
    }

    stack<int>st;
    int32_t x=n;
    while(x!=-1){
        st.push(x);
        x = par[x];
    }

    while(!st.empty())
        cout << st.top() << ' ', st.pop();
    

    return 0;
}
