#include <bits/stdc++.h>
using namespace std;

#define color_num 5

string colors[color_num] = {"nocolor" , "red" , "green" , "blue" , "yellow" };

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int> >adj(n);
    for( int i=0 ; i<m ; i++ )
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // red=1 ; green=2 ; blue=3 ; yellow=4 ; nocolor = 0
    vector<int> color(n,0);

    function<void(int)> dfs = [&](int start){

        vector<bool>avail(color_num,1);
        for(int node : adj[start] )
            avail[color[node]]=0;

        for( int i=1 ; i<color_num ; i++ )
            if(avail[i]==1){
                color[start]=i;
                break;
            }

        for(int node : adj[start] )
            if(!color[node])
                dfs(node);
    };

    color[0]=1;
    dfs(0);

    for( int i=0 ; i<n ; i++ )
        cout << i << "->" << colors[color[i]] << endl;

    return 0;
}