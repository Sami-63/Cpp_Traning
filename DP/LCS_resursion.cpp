#include <iostream>
using namespace std;

// Counting longest common subsequences from s1 and s2
// using recursion
int LCS(string &s1,string &s2, int i, int j){
	if(i==s1.size() || j==s2.size())
		return 0;

	if( s1[i]==s2[j] )
		return 1 + LCS( s1,s2, i+1, j+1 );
	else
		return max( LCS(s1,s2, i+1, j) , LCS(s1,s2,i,j+1) );
}

int main()
{
	string s1,s2;
	cin >> s1 >> s2;

    cout << "LSC = " <<  LCS(s1,s2,0,0) << endl;

    return 0;
}