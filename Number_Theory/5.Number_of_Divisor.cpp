#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
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

vector<int>divisors;

void findDivisor(int n)
{
    divisors.push_back(1);
    divisors.push_back(n);
    for( int i=2 ; i*i<=n ; i++ )
        if(n%i==0){
            if(n/i==i)
                divisors.push_back(i);
            else{
                divisors.push_back(i);
                divisors.push_back(n/i);
            }
        }
    sort(divisors.begin(),divisors.end());
}

int countDivisors(int n)
{
    int divs = 1;

    for( int i=0 ; i<prime.size() ; i++ )
    {
        if(n%prime[i]==0){
            int cnt=0;
            while(n%prime[i]==0)
                n /= prime[i],cnt++;
            divs *= cnt;
        }
    }
    return divs;
}

int main()
{
    int n;
    cin >> n;

    findDivisor(n);
    int cnt = countDivisors(n);

    cout << "Divisors = " << cnt << endl;
    for( int i=0 ; i<cnt ; i++ )
        cout << divisors[i] << endl;

    return 0;
}
