
//  Author : As-Sami
//  Time   : 2021-05-23 20:36:28

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>a(n),b(m),c(m,n);
    for( int i=0 ; i<n ; i++ )
        cin >> a[i];
    for( int i=0 ; i<m ; i++ )
        cin >> b[i];

    int i=0,j=0, cnt=0;

    while(!(j==m || i==n)){
        if(a[i]<b[j])
            i++;
        else{
            if(i)
                c[cnt++] = i--, j++;
            else
                c[cnt++] = 0 , j++;
        }
    }
    
    for( int i=0 ; i<m ; i++ )
        cout << c[i] << " \n"[i==n+m-1];
    

    return 0;
}
