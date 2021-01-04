#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n + 10], ans[n + 10];
        for(int i = 0;i<n;i++)cin >> a[i];
        int ans1 = 0;
        for(int i = n-1;i>=0;i--)
        {
            ans[i] = a[i];
            if(i + a[i] < n)ans[i] += ans[i + a[i]];
            ans1 = max(ans1, ans[i]);
        } cout << ans1 << endl;
    }
}
