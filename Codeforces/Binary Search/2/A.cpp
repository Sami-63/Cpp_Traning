
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-05-23 20:34:45

#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define endl '\n'
#define X first
#define Y second
#define pb push_back
#define check(x) cout << #x << " = " << x << endl
#define all(x) x.begin(),x.end()
#define puts(x) cout << x << endl

int main()
{
    ll w,h,n;
    cin >> w >> h >> n;

    // if(w>h)swap(w,h);

    function<ll(ll)> f = [&](ll x){
        return (x/w) * (x/h);
    };

    ll i=w, j=max(w,h)*n;

// for( ll i=0 ; i<=30 ; i++ )
//     printf("f(%lld) = %lld\n",i,f(i));

    while(i<j){
        ll mid = (i+j)/2;

        if(f(mid) < n )
            i = mid + 1;
        else
            j = mid;
    }
    puts(i);


    return 0;
}
 