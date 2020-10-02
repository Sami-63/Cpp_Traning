#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int level[100];
int n,m,x,y;
vector<int> adj[100];

void bfs(int start)
{
    queue<int>q;
    q.push(start);
    level[start]=0;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for( int &nxt : adj[cur])
            if(!level[nxt]){
                level[nxt]=level[cur]+1;
                q.push(nxt);
            }
    }

}

int main()
{
    cin >> n >> m;
    for( int i=0 ; i<m ; i++ )
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int start,End;
    cout << "Enter source and destination :" << endl;
    cin >> start >> End;

    bfs(start);
    cout << "Distance : "<< level[End] << endl;

    return 0;
}
/**
6 5
1 2
2 3
3 4
4 5
5 6

1 6
*/
