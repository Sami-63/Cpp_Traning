#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
#define sz 100

int n,m,adj[sz][sz];
vector<int> level(sz,-1),parent(sz);

void bfs(int start)
{
	queue<int>q;
	q.push(start);
	level[start] = 1;
	parent[start] = -1;

	while(!q.empty())
	{
		int cur = q.front();
		q.pop();

		for( int i=1 ; i<=n ; i++ )
			if( adj[cur][i] && level[i]== -1 )
			{
				level[i] = level[cur]+1;
				q.push(i);
				parent[i]=cur;
			}
	}
}
int main()
{
	int x,y;
	cin >> n >> m;
	for( int i=0 ; i<m ; i++ )
	{
		cin >> x >> y;
		adj[x][y]=1;
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

