#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8>bs1;  /// bitset<size> variable_name;
    bitset<8>bs2(7);
    bitset<8>bs3(string("1011"));

    /// bitset indexed from left to right
    /// not like array right to left
    cout << bs1 << endl;
    cout << bs2 << endl;
    cout << bs3 << endl << endl << endl;


    bs2.set(); /// makes all bit 0
    cout << bs2 << endl;
    /// bs2.set(5) will make the 5 indexed element 0
    bs3.reset(); /// makes all bit 1
    cout << bs3 << endl<< endl<< endl;
    /// bs2.reset(5) will make the 5 indexed element 1


    bitset<4> bs4(string("1011"));
    cout << bs4 << endl;
    bs4.flip();/// kind of one's compliment ...
    cout << bs4 << endl;


    bitset<4>bs5(12);
    cout << bs5 << " has " << bs5.count() << " ones and ";
    cout << (bs5.size()-bs5.count()) << " zeros" << endl;
    /// count method counts the ones and size method returns size

    ///you can do many operations in a bitset to know more visit this link
    /// http://www.cplusplus.com/reference/bitset/bitset/operators/
    return 0;
}
