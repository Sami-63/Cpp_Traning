
//  Author : As-Sami
//  Time   : 2021-05-23 20:32:34
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
#define output(x) cout << x << endl
const int mod = 1e9+7;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for( int i=0 ; i<n ; i++ )
    	cin >> a[i];

    while(k--)
    {
    	int x,i=0,j=n-1,mid,flag=0;
    	cin >> x;

    	while(i<j)
    	{
    		mid = floor((i+j)/2.0);
    		if(a[mid]<x)
    			i = mid+1;
    		else
    			j = mid;
    	}

    	output( (a[i]==x ? "YES" : "NO") );
    }
    
    
    return 0;
}
