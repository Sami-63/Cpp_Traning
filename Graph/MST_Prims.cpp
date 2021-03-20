#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m;
vector< vector< pair<int,int> > >adj;
vector<int> par, col;
vector< pair<int , pair<int,int> > > ans;


int find_par(int n)
{
    if(par[n]==n)
        return n;
    return par[n] = find_par(par[n]);
}

void mst_init()
{
    for( int i=1 ; i<=n ; i++ )
        par[i] = i;
}


int MST_prims(int start)
{
    priority_queue< pair<int , pair<int,int> >  ,
            vector< pair<int , pair<int,int> > >,
           greater< pair<int , pair<int,int> > > >pq;

    for( int i=0 ; i<adj[start].size() ; i++ )
    {
        int node = adj[start][i].first;
        int cost = adj[start][i].second;

        pq.push( {cost , {min(start,node) , max(start,node)} } );
    }

    col[start] = 1;
    mst_init();
    int total=0;

    while(!pq.empty())
    {
        int w = pq.top().first;
        int p = pq.top().second.first;
        int q = pq.top().second.second;
        pq.pop();

        int par1 = find_par(p);
        int par2 = find_par(q);


        if(par1!=par2)
        {
            par[par1] = par2;
            ans.push_back( { w , {p,q} } );
            total += w;

            if(col[p] && col[q]) continue;

            start = col[p] ? q : p;
            col[start] = 1;

            for( int i=0 ; i<adj[start].size() ; i++ )
            {
                int node = adj[start][i].first;
                int cost = adj[start][i].second;

                pq.push( {cost , {min(start,node) , max(start,node)} } );
            }
        }
    }

    for(auto x : ans)
    {
        printf("weight -> %d | connected node %d-%d\n",x.first,x.second.first,x.second.second);
    }

    return total;
}


int main()
{
    cin >> n >> m;
    adj.resize(n+1);
    par.resize(n+1);
    col.resize(n+1,0);
    for( int i=0 ; i<m ; i++ )
    {
        int x,y,z;
        cin >> x >> y >> z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }

    int result = MST_prims(1);

    cout << result << endl;

    return 0;
}
