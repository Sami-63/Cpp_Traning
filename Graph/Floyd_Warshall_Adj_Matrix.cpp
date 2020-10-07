#include <iostream>
#include <stack>
using namespace std;
#define inf 999

int adj[100][100],n,m;
void init()
{
    for( int i=1 ; i<=n ; i++ )
        for( int j=1 ; j<=n ; j++ )
                adj[i][j]=inf;
}
void floydWarshall()
{
    for( int i=1 ; i<=n ; i++ )
        for( int j=1 ; j<=n ; j++ )
            for( int k=1 ; k<=n ; k++ )
                if((adj[i][k] + adj[k][j])<adj[i][j])
                    adj[i][j] = adj[i][k] + adj[k][j];

}

int main()
{
    int x,y,z;
    cin >> n >> m;
    init();
    for( int i=0 ; i<m ; i++ ){
        cin >> x >> y >> z;
        adj[x][y] = z;
    }
    floydWarshall();

    int start , End;
    cout << "Enter source and destination : " << endl;
    cin >> start >> End;
    if(adj[start][End]!=inf)
        cout << "Distance = " << adj[start][End] << endl;
    else
    cout << "No path" << endl;
    return 0;
}
/**
5 6
4 1 5
1 2 15
5 2 17
5 4 37
3 5 3
3 4 23

*/
