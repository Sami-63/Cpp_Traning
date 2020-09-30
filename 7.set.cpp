#include <iostream>
#include <set>
#include <iterator>
using namespace std;

void showSet(set<int> s)
{
    for( set<int>::iterator it=s.begin() ; it!=s.end() ; it++ )
        cout << *it << endl;
        cout << endl;
}

int main()
{
    set<int> st;
    set<int>::iterator it;

    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(2);
    st.insert(5);
    st.insert(5);
    st.insert(10);
    st.insert(15);
    st.insert(20);

    it = st.find(2);
    cout << "*it = " << *it << endl;
    cout << "count 2 = " << st.count(2) << endl;
    cout << "count 3 = " << st.count(3) << endl;

    showSet(st);
    it = st.begin();
    advance(it,3);

    st.erase(it);
    st.erase(15);
    showSet(st);

    it = st.begin()++;
    it++;
    st.erase(it,st.end());
    showSet(st);

    cout << "Is empty -> " << st.empty() << endl;
    cout << "Size -> " << st.size() << endl;
    st.clear();
    showSet(st);
    return 0;
}



