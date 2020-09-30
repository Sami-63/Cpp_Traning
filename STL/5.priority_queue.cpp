#include <iostream>
#include <queue>
using namespace std;

void showPq( priority_queue<int> q)
{
    while(!q.empty())
    {
        cout << q.top() << ' ' ;
        q.pop(); /// pop the first element/top element
    }
    cout << endl;
}
int main()
{
    priority_queue<int> pq;

    pq.push(19);
    pq.push(2);
    pq.push(9);     /// priority queue e sob element descending order e sortedq thake
    pq.push(21);    ///  top
    pq.push(15);   ///   21  19 15 9 2

    showPq(pq);
    pq.size();
    return 0;
}
