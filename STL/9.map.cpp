#include <iostream>
#include <map>
#include <iterator>
using namespace std;

void showMap(map<char,int>m)
{
    for( map<char,int>::iterator it=m.begin() ; it!=m.end() ; it++ )
        cout << it->first << ' ' << it->second << endl;
}
int main()
{
    map<char,int>theMap;

    ///    key    val
    theMap['a'] = 10;
    theMap['b'] = 20;
    theMap['c'] = 90;
    theMap['g'] = 30;
    theMap['d'] = 40;
    theMap.insert(pair<char,int>('e',50));
    theMap.insert({'t',80});
    showMap(theMap);
    cout << endl;


    map<char,int>::iterator it1 = theMap.find('c'); ///find by key....'c' key er iterator return korbe
    cout << it1->first << ' ' << it1->second << endl << endl;

    cout << endl;

    theMap.erase('b'); /// erase by key value
    showMap(theMap);
    cout << endl;

    map<char,int>::iterator it=theMap.begin();
    it++;
    it++;
    theMap.erase(it); /// erase by iterator
    showMap(theMap);  /// erase by range o ase [first,last)
    cout << endl;

    cout << theMap.count('a') << endl;
    cout << theMap.count('z') << endl;
    cout << theMap.empty() << endl;
    cout << theMap.size() << endl;
    theMap.clear();
    showMap(theMap);


    return 0;
}
