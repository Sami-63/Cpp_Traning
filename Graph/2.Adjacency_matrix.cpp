#include <iostream>
using namespace std;

int adj[100][100];
int main()
{
    int n,m,x,y,z;
    cin >> n >> m;

    for( int i=0 ; i<m ; i++ )
    {
        cin >> x >> y; /// >> z; for taking weight
        adj[x][y] = 1; /// adj[x][y] = z;
        adj[y][x] = 1; /// adj[y][x] = z;
    }
    for( int i=0 ; i<n ; i++ )
        for( int j=0 ; j<n ; j++ )
            cout << adj[i][j] << "\t\n"[j==n-1];

    return 0;
}
/**
4 3
0 1 4
1 2 9
2 3 10
*/
