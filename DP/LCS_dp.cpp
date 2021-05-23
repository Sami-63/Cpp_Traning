#include <iostream>
using namespace std;

// Counting longest common subsequences from s1 and s2
// using dp
int LCS(string &s1,string &s2){

	int m=s1.size() , n=s2.size();
	int mat[m+1][n+1];

	for( int i=0 ; i<=m ; i++ )
		for( int j=0 ; j<=n ; j++ ){
			if(i==0 || j==0)
				mat[i][j] = 0;
			else if( s1[i-1]==s2[j-1] )
				mat[i][j] = 1 + mat[i-1][j-1];
			else 
				mat[i][j] = max( mat[i-1][j] , mat[i][j-1] );
		}
	return mat[m][n];
}

int main()
{
	string s1,s2;
	cin >> s1 >> s2;

    cout << "LSC = " <<  LCS(s1,s2) << endl;

    return 0;
}