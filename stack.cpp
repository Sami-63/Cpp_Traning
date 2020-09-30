#include<iostream>
#include<stack>
using namespace std;

void showStack(stack<int> s)
{
    while(!s.empty())
    {
        cout << s.top() << ' ' ;
        s.pop();  /// remove from top
    }
    cout << endl;
}
int main()
{
    stack<int> st;

    st.push(5);
    st.push(2);
    st.push(15);
    st.push(49);    ///        top
    st.push(11); /// 5 2 15 49 11

    showStack(st);

    st.size();

	return 0;
}
