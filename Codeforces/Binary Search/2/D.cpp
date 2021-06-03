
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-05-27 16:34:04

#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define print(x) cout << #x << " = " << x << endl

void solve(int T){
    ll m,n;
    cin >> m >> n;
    vector<array<ll,3>>a(n);// t, max, rest
    

    for(auto &[x,y,z] : a)
        cin >> x >> y >> z;


    function<ll(ll)> f = [&](ll i){
        ll sum = 0;

        for( auto [t,lim,rest] : a)
        {
            sum += i/(t*lim+rest) *lim;
            ll rem = i%(t*lim+rest);
            if(rem/t > lim)
                sum += lim;
            else
                sum += rem/t;
        }
        
        return sum;
    };

    ll i=0,j=LLONG_MAX;
    while(i<j){
        ll mid = (i+j)/2;
        if( f(mid)<m )
            i = mid + 1;
        else
            j = mid;
    }
    cout << i << endl;

    bool noprint=0;
    ll all_sum=0;
    for( auto [t,lim,rest] : a)
    {
        ll sum = i/(t*lim+rest) *lim;
        ll rem = i%(t*lim+rest);
        if(rem/t > lim)
            sum += lim;
        else
            sum += rem/t;

        if(all_sum+sum>m){
            sum = m - all_sum;
            cout << sum << ' ';
            noprint=1;
            continue;
        }
        else
            all_sum += sum;

        if(noprint)
            cout << 0 << endl;
        else
            cout << sum << ' ';
    }
    cout << endl;
}

int main()
{
    int t=1;
    // cin >> t;
    for( int i=0 ; i<t ; i++ )
        solve(i+1);
    
    return 0;
}
