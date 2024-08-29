#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        ll a[n+1];
        bool c[n+1];

        ll ans = 0, mx = 0;

        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            ans += a[i];
        }

        for (int i = 1; i <= n; i++) c[i] = false;

        for (int i = 1; i <= n; i++) 
        {
            if (c[a[i]]) 
            {
                mx = max(mx, a[i]);
            }
            c[a[i]] = true;
            a[i] = mx;
        }

        for (int i = 1; i <= n; i++) ans += a[i];
        for (int i = 1; i <= n; i++) c[i] = false;

        mx = 0;
        for (int i = 1; i <= n; i++) 
        {
            if (c[a[i]]) 
            {
                mx = max(mx, a[i]);
            }
            c[a[i]] = true;
            a[i] = mx;
        }

        for (int i = 1; i <= n; i++) ans += (n - i + 1) * 1LL * a[i];

        cout << ans << endl;
    }
    
    return 0;
}
