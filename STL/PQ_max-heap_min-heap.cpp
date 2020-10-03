#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int , vector<int> , less<int> > pq1;
    /// default pq that store in descending order .... MAX HEAP
    pq1.push(5);
    pq1.push(15);
    pq1.push(2);
    pq1.push(90);
    pq1.push(20);
    pq1.push(65);

    cout << "Max heap priority queue: " << endl;
    while(!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }cout << endl << endl;

    priority_queue<int , vector<int> , greater<int> > pq2;
    /// This pq store element in ascending order
    pq2.push(5);
    pq2.push(15);
    pq2.push(2);
    pq2.push(90);
    pq2.push(20);
    pq2.push(65);

    cout << "Max heap priority queue: " << endl;
    while(!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }cout << endl;


    return 0;
}
