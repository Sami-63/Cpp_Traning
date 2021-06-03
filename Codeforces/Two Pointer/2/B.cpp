
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-05-24 12:47:56

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define print(x) cout << #x << " = " << x << endl

void solve(int T){
    ll n,s;
    cin >> n >> s;
    vector<ll>a(n);
    for(auto &x : a)
        cin >> x;

    ll i=0, ans=n+1, sum=0, j=0;

    while(j<n)
    {
        sum += a[j];
        
        while(sum-a[i]>=s){
            sum -= a[i++];
        }
        if(sum>=s)
            ans = min(ans, j-i+1);
        j++;
        // print(i);
        // print(ans);
        // print(sum);
    }
    
    cout << (ans!=n+1 ? ans : -1) << endl;    
}

int main()
{
    int t=1;
    // cin >> t;
    for( int i=0 ; i<t ; i++ )
        solve(i+1);
    
    return 0;
}
