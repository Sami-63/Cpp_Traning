#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    vector<int>::iterator it = v.begin(),it1;
    cout << *it << endl;
    it++;
    cout << *it << endl;
    it--;
    cout << *it << endl << endl;

    it1 = v.begin();
    advance(it1,5);
    cout << *it1 << endl;
    cout << "Distance = " << distance(it,it1) << endl;

    return 0;
}
