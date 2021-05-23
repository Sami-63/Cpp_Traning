
//  Author : As-Sami
//  Time   : 2021-05-23 20:33:51
//  Problem -> 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define x first
#define y second
#define pb push_back
#define pii pair<int,int>
#define print(x) cout << #x << " = " << x << endl
#define pi acos(-1)
#define all(x) x.begin(),x.end()
#define output(x) cout << x << " \n"[k==0]
const int mod = 1e9+7;

int main()
{
    int n,k;
    cin >> n;
    vector<int>a(n);
    for( int i=0 ; i<n ; i++ )
        cin >> a[i];

    sort(all(a));
    cin >> k;
    while(k--)
    {
        int x,y,i=0,j=n-1,mid,flag=0;
        cin >> x >> y;

        output( ( upper_bound(all(a),y) - lower_bound(all(a),x)  ) );
    }
    
    
    return 0;
}
