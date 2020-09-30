#include <iostream>
#include <vector>    ///for vector and their functions
#include <algorithm> /// sort
using namespace std;

void showvec(vector<int> &v)
{
    for( int i=0 ; i<v.size() ; i++ )
        cout << v[i] << " \n"[i==v.size()-1];
    cout << endl;
}
int main()
{
    vector<int> v1,v2(10),v3(5,-1);

    showvec(v1);
    showvec(v2);
    showvec(v3);

    v1.push_back(12);
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(19);
    v1.push_back(90);
    v1.pop_back(); /// delete last element

    v1.insert( v1.begin()+2 , 10); /// pos , val
    v1.erase( v1.begin()+ 4); /// pos or first pos , last pos
    sort( v1.begin() , v1.end() );
    reverse( v1.begin() , v1.end() );

    v1.empty();
    v2.clear();
    v3.size();

    return 0;
}
