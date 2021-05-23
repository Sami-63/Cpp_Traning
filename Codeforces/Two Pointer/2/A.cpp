
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-05-23 20:37:21

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

    ll i=0,j=0  , sum=0, ans=0;
    while(i<n && j<n){

        // print(sum);
        // print(i);
        // print(j);
        // print(ans);

        if(sum>s)
            sum -= a[i++];
        else if(sum==s)
            ans = max(ans, j-i), sum = sum-a[i++];
        else{
            sum += a[j++];
            if(sum<=s)
                ans = max(ans, j-i); 
        }
    }
    if(sum<=s)
        ans = max(ans, j-i); 

    cout << ans << endl;
}

int main()
{
    int t=1;
    // cin >> t;
    for( int i=0 ; i<t ; i++ )
        solve(i+1);
    
    return 0;
}
