#include <iostream>
using namespace std;

int main()
{
    pair<int,string>List1;
    pair<int,string>List2( 2, "Biriani");
    pair<int,string>List3(List2);

    List1 = make_pair(1 , "Chaoming") ;

    cout << List1.first << ' ' << List1.second << endl;
    cout << List2.first << ' ' << List2.second << endl;

    return 0;
}
