
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-05-24 20:09:18

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define print(x) cout << #x << " = " << x << endl

void solve(int T){
    ll n,x,y;
    cin >> n >> x >> y;

    if(x>y)swap(x,y);

    ll i=0,j=y*n;

    while(i<j){
        int mid = (i+j)/2;

        int cost = mid/x + (mid-x)/y;

        if(cost<n)
            i = mid+1;
        else
            j = mid;
    }
    cout << i << endl;
}

int main()
{
    int t=1;
    // cin >> t;
    for( int i=0 ; i<t ; i++ )
        solve(i+1);
    
    return 0;
}