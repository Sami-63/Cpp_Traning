#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

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
int main()
{
    int n;
    cin >> n;

    findDivisor(n);
    int cnt = divisors.size();

    cout << "Divisors = " << cnt << endl;
    for( int i=0 ; i<cnt ; i++ )
        cout << divisors[i] << endl;

    return 0;
}
