#include <iostream>
using namespace std;

int main()
{
    string str = "string 1";
    cout << str << endl;
    cout << str[1] << endl;
    cout << str.size() << endl;
    cout << str.length() << endl;
    str.clear();
    cout << str.empty() << endl;



    return 0;
}
