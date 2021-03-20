#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector< vector< pair<int,int> > >adj;
vector< pair<int , pair<int,int> > > ans;

vector<int> par;



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


int MST_kruskal()
{
    int total=0;
    vector<pair< int , pair<int,int> > >v;

    for( int i=1 ; i<=n ; i++ )
        for( int j=0 ; j<adj[i].size() ; j++ )
        {
            int w = adj[i][j].second;
            int node = adj[i][j].first;

            v.push_back( { w , { min(i,node) , max(i,node) } } );
        }

    sort( v.begin() , v.end() );
    mst_init();

    for( auto x : v )
    {
        int w = x.first;
        int p = x.second.first;
        int q = x.second.second;

        int u = find_par(p);
        int v = find_par(q);

        if(u!=v)
        {   
            par[u] = v;
            total += w;
            ans.push_back( {w , {p,q}} );
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
    for( int i=0 ; i<m ; i++ )
    {
        int x,y,z;
        cin >> x >> y >> z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }

    int result = MST_kruskal();

    cout << result << endl;

    return 0;
}
