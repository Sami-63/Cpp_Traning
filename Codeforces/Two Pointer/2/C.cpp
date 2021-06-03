
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-05-29 21:09:21

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define print(x) cout << #x << " = " << x << endl

ll f(ll n){
    return n*(n+1)/2;
}

void solve(int T){
    ll n,s;
    cin >> n >> s;
    vector<ll>a(n);
    for(auto &x : a)
        cin >> x;

    ll i=0;
    ll sum=0,cnt=0;

    for( ll j=0 ; j<n ; j++ )
    {
        sum += a[j];

        while(sum>s)
            sum -= a[i++];

        cnt += j-i+1;
        
    } 

    cout << cnt << endl;
}

int main()
{
    int t=1;
    // cin >> t;
    for( int i=0 ; i<t ; i++ )
        solve(i+1);
    
    return 0;
}
