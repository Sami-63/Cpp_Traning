#include<iostream>
#include<bitset>
#include<vector>
using namespace std;
#define sz 1000000

bitset<sz> siv;
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

    cout << "Count : " << prime.size() << endl;
    for( int i=0 ; i<prime.size() ; i++ )
        cout << prime[i] << endl;

    return 0;
}
