#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
	ordered_set st;

	st.insert(1);
	st.insert(2);
	st.insert(4);
	st.insert(8);
	st.insert(16);

	cout << *st.find_by_order(1) << endl; // 2
    cout << *st.find_by_order(2) << endl; // 4
    cout << *st.find_by_order(4) << endl; // 16
    cout << (end(st)==st.find_by_order(6)) << endl << endl << endl; // true 

	cout << st.order_of_key(-5) << endl;  // 0
    cout << st.order_of_key(1) << endl;   // 0
    cout << st.order_of_key(3) << endl;   // 2
    cout << st.order_of_key(4) << endl;   // 2
    cout << st.order_of_key(400) << endl; // 5

    
    return 0;
}