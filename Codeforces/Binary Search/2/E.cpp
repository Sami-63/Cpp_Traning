
/*-----Get ready to fight-----*/

//  Author : As-Sami
//  Time   : 2021-06-01 19:10:04

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define print(x) cout << #x << " = " << x << endl

double f(double x){
	return x*x + sqrt(x);
}

bool almost_equal(double a, double b)
{
	// cedit behind this function -> exercism_mentor::siebenschlaefer 
    double diff = abs(a - b);
    if (diff <= 1e-6)
        return true;

    return false;
}	

void solve(int T){
    double n;
    scanf("%lf",&n);

    double i=0,j=n;

    while(i<j){
    	double mid = (i+j)/2;
        double x = f(mid);
    	
        if(x<n)
    		i = mid;
        else if(almost_equal(x,n)){
            printf("%.6lf\n", mid);
            return;
        }
    	else
    		j = mid;
    }
}

int main()
{
    int t=1;
    // cin >> t;
    for( int i=0 ; i<t ; i++ )
        solve(i+1);
    
    return 0;
}