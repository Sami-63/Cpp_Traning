#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
#define sz 100

int n,m,x,y;
vector<int> adj[sz],level(sz,-1),parent(sz);

void bfs(int start)
{
    queue<int>q;
    q.push(start);
    level[start]=0;
    parent[start]= -1;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for( int &nxt : adj[cur])
            if(level[nxt]==-1){
                level[nxt]=level[cur]+1;
                q.push(nxt);
                parent[nxt] = cur;
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
    }



    int start,End;
    cout << "Enter source and destination :" << endl;
    cin >> start >> End;


    bfs(start);
    if(~level[End])
    {
        cout << "Distance : "<< level[End] << endl;

        stack<int>st;
        while(End!= -1)
        {
            st.push(End);
            End = parent[End];
        }
        cout << "Path -> ";
        while(!st.empty())
        {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
    else
        cout << "No path is between " << start << " and " << End << endl;
    return 0;
}
/**
7 8
1 2
1 3
3 2
2 7
7 5
5 6
6 4
4 3

*/
