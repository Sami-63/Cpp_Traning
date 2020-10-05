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
    /// stack is a dynamic array where you can insert element to
    /// the right .... and you can only remove and access the left element
    st.push(5);
    st.push(2);
    st.push(15);
    st.push(49);    ///        top
    st.push(11); /// 5 2 15 49 11

    showStack(st);

    cout << st.size() << endl;

	return 0;
}
