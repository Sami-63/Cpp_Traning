#include <iostream>
#include <queue>
using namespace std;

void showqueue( queue<int> q)
{
    while(!q.empty())
    {
        cout << q.front() << ' ';
        q.pop(); /// pop the first element/front element
    }
    cout << endl;
}

int main()
{
    queue<int>q1;

    q1.push(9);
    q1.push(5);
    q1.push(12);    /// front         back
    q1.push(42);   ///  9      5 12   42

    q1.size();
    q1.back();
    showqueue(q1);

    return 0;
}
