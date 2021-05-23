
//  Author : As-Sami
//  Time   : 2021-05-23 20:36:13

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define X first
#define Y second
#define pb push_back
#define pii pair<int,int>
#define print(x) cout << #x << " = " << x << endl
#define pi acos(-1)
#define all(x) x.begin(),x.end()
#define output(x) cout << x << endl

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>a(n),b(m),c(n+m);
    for( int i=0 ; i<n ; i++ )
        cin >> a[i];
    for( int i=0 ; i<m ; i++ )
        cin >> b[i];

    int i=0,j=0, cnt=0;

    while(i!=n and j!=m){
        if(a[i]<b[j])
            c[cnt++] = a[i++];
        else
            c[cnt++] = b[j++];
    }
    while(i!=n)
        c[cnt++] = a[i++];
    while(j!=m)
        c[cnt++] = b[j++];
    
    for( int i=0 ; i<n+m ; i++ )
        cout << c[i] << " \n"[i==n+m-1];
    

    return 0;
}
