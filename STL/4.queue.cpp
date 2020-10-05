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
    /// queue is a dynamic array where you can insert element to the right
    /// and you can only remove and access left element

    q1.push(9);
    q1.push(5);
    q1.push(12);    /// front         back
    q1.push(42);   ///  9      5 12   42

    cout << q1.size() << endl;
    cout << q1.back() << endl;
    showqueue(q1);

    return 0;
}
