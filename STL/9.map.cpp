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

    theMap['a'] = 10;
    theMap['b'] = 20;
    theMap['c'] = 90;
    theMap['g'] = 30;
    theMap['d'] = 40;
    theMap.insert(pair<char,int>('e',50));

    cout << theMap.find('c')->first << ' ' << theMap.find('c')->second << endl << endl;
    showMap(theMap);
    cout << endl;

    theMap.erase('b');
    showMap(theMap);
    cout << endl;

    map<char,int>::iterator it=theMap.begin();
    it++;
    it++;
    theMap.erase(it);
    showMap(theMap);
    cout << endl;

    cout << theMap.count('a') << endl;
    cout << theMap.count('z') << endl;
    cout << theMap.empty() << endl;
    cout << theMap.size() << endl;
    theMap.clear();
    showMap(theMap);


    return 0;
}
