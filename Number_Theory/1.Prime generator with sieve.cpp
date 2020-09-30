#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define sz 10000
vector<int>prime;
bool sieve[sz];

void Sieve(int n)
{
    int limit = sqrt(n+1);

    for ( int i=3 ; i<=limit ; i+=2 )
        if(!sieve[i])
            for ( int j=i*i ; j<=n ; j+=i+i )
                sieve[j] = true;

    prime.push_back(2);
    for (int p=3; p<=n; p+=2)
       if (!sieve[p])
            prime.push_back(p);
}
int main()
{
    int n;
    cin >> n;
    Sieve(n);

    int cnt=prime.size();
    for( int i=0 ; i<cnt ; i++ )
        cout << prime[i] << " \n"[i==cnt-1];
    cout << cnt << endl;
    return 0;
}
