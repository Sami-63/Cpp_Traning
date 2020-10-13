#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

#define pii pair<int,int>
#define inf 9999
vector<int> adj[100],cost[100],nodeW(100,inf),parent(100,-1);
priority_queue< pii , vector<pii> , greater<pii> >pq;

void Dijkstra(int start)
{
    nodeW[start] = 0;
    pq.push({0,start});

    while(!pq.empty())
    {
        int cst = pq.top().first, node = pq.top().second, newcost,curNode;
        pq.pop();
        for( int i=0 ; i<adj[node].size() ; i++ )
        {
            newcost = cst + cost[node][i];
            curNode= adj[node][i];
            if(newcost<nodeW[curNode])
            {
                nodeW[curNode] = newcost;
                parent[curNode] = node;
                pq.push({newcost,curNode});
            }
        }
    }

}
int main()
{
	int n,m,x,y,z;
	cin >> n >> m;
	for( int i=0 ; i<m ; i++ )
	{
		cin >> x >> y >> z;
		adj[x].push_back(y);
		adj[y].push_back(x);
		cost[x].push_back(z);
		cost[y].push_back(z);
	}

	int from, des;
	cin >> from >> des;
    Dijkstra(from);

    cout << "Path length from node " << from << " to node " << des << " is " << nodeW[des] << endl;

    stack<int>st;
    int i = des;
    st.push(i);
    while(parent[i]!=-1)
    {
        st.push(parent[i]);
        i = parent[i];
    }

    cout << "Path way : ";
    while(!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
	return 0;
}
/**
7 10
1 3 1
1 4 6
3 4 2
3 6 8
4 5 9
4 2 2
2 6 1
2 7 5
6 5 2
5 7 2

1 5
*/
