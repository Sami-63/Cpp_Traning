#include<iostream>
#include<vector>
using namespace std;

#define sz 90000000

vector<int>primes;
int status[sz>>5];

void bitwisesieve()
{
	for( int i=3 ; i*i<=sz ; i+=2 )
		if((status[i>>5] & (1<<(i & 31)))==0){
			for( int j=i*i ; j<sz ; j+=i<<1 )
				status[j>>5] |= (1<<(j & 31));
		}
	primes.pb(2);
	for( int i=3 ; i<sz ; i+=2 )
		if( (status[i>>5] & (1<<(i & 31)))==0 )
			primes.pb(i);
}

int main()
{
	for( int i=0 ; i<primes.size() ; i++ )
		cout << primes[i] << endl;
	return 0;
}