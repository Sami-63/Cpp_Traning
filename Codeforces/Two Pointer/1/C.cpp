
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-05-23 20:36:39

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define print(x) cout << #x << " = " << x << endl

void solve(int T){
    ll n,m;
    cin >> n >> m;
    vector<ll>a(n),b(m);
    for(auto &x : a)
        cin >> x;
    for(auto &x : b)
        cin >> x;

    // a.push_back(1e9+9);
    // b.push_back(1e9+9);

    ll ans=0,i=0,j=0;

    while(i!=n && j!=m){

        ll cnt1=0,cnt2=0, cur;
        cur=a[i];

        while(i<n && cur==a[i])
            i++,cnt1++;

        while(j<m && b[j]<=cur)
        {
            if(b[j]==cur)
                cnt2++;
            j++;
        }
        ans += cnt1*cnt2;
    }    

    cout << ans << '\n'    ;
}

int main()
{
    int t=1;
    // cin >> t;
    for( int i=0 ; i<t ; i++ )
        solve(i+1);
    
    return 0;
}
