#include <iostream>
#include <vector>
using namespace std;

vector<int>adj[100];
vector<int>cost[100]; /// parallel vector to store cost
int main()
{
    int n,m,x,y,z;
    cin >> n >> m;

    for( int i=0 ; i<m ; i++ )
    {
        cin >> x >> y ;///>> z; for taking weight
        adj[x].push_back(y); /// comment the 2nd & 4th line for directed graph
        adj[y].push_back(x);
        cost[x].push_back(1); ///cost[x].push_back(z);
        cost[y].push_back(1); ///cost[y].push_back(z);
    }

    for( int i=0 ; i<n ; i++ )
    {
        cout << i << " -> ";
        for( int j=0 ; j<adj[i].size() ; j++ )
            cout << adj[i][j] << " \n"[j==adj[i].size()-1];
        cout << i << " -> ";
        /// uncomment these lines to see costs
//        for( int j=0 ; j<cost[i].size() ; j++ )
//            cout << cost[i][j] << " \n"[j==cost[i].size()-1];
//        puts("");
    }
    return 0;
}
/**
4 3
0 1 4
1 2 9
2 3 10
*/
