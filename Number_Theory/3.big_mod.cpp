#include <iostream>
using namespace std;

int mod;
int bigMod(int n, int p)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        int ret = bigMod(n,p/2);
        return ((ret%mod)*(ret%mod))%mod;
    }
    else {
        return ((n%mod)*((bigMod(n,p-1))%mod))%mod;
    }
}

int main()
{
    int n,p;
    cin >> n >> p >> mod;

    int ans = bigMod(n,p); /// (n^p)%mod
    cout << ans << endl;

    return 0;
}
