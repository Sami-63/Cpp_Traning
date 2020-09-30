#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

bitset<1000000> siv;
vector<int> prime;
void bitWiseSieve( int limit )
{
    siv.set();
    siv[0]=siv[1]=0;

    prime.push_back(2);
    for( int i=3 ; i<=limit ; i+=2 )
        if(siv[i]){
            for( int j=i*i ; j<=limit+1 ; j+=i )
                siv[j]=0;
        prime.push_back(i);
        }
}
int main()
{
    int n;
    cin >> n;

    bitWiseSieve(n);

    for( int i=0 ; i<prime.size() && n!=1 ; i++ )
        if(n%prime[i]==0)
            while(n%prime[i]==0)
            {
                cout << prime[i] << ' ';
                n/=prime[i];
            }

    return 0;
}
