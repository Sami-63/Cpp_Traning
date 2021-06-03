
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-05-24 16:04:43

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define print(x) cout << #x << " = " << x << endl

int a[100005],par[100005],n;

int find_par(int x){
	if(x==par[x])
		return x;

	return par[x] = find_par(par[x]);
}

void uni_on(int x,int y){

	if(x>y) swap(x,y);

	int a = find_par(x);
	int b = find_par(y);

	if(a<b)
		par[b] = par[a];
	else
		par[a] = par[b];
	
}

void get(int x,int y){
	cout << (find_par(x)==find_par(y) ? "YES\n" : "NO\n");
}

void solve(int T){
    int m;
    cin >> n >> m;
    for( int i=0 ; i<n ; i++ )
    	a[i] = par[i+1] = i+1;

    for( int i=0 ; i<m ; i++ )
    {
    	int x,y;
    	string s;
    	cin >> s >> x >> y;

    	if(s=="union")
    		uni_on(x,y);
    	else
    		get(x,y);
    }
    
    // for( int i=1 ; i<=n ; i++ )
    // 	print(par[i]);	
}

int main()
{
    int t=1;
    // cin >> t;
    for( int i=0 ; i<t ; i++ )
        solve(i+1);
    
    return 0;
}
