#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> k >> n;
        vector<ll> a(n * k + 1);

        for (int i = 1; i <= n * k; i++) cin >> a[i];

        ll ans = 0;
        int x = (k + 1) / 2, y = k - x + 1, i = n * k - y + 1;
        
        while (n--) 
        {
            ans += a[i];
            i -= y;
        }

        cout << ans << endl;
    }
    
    return 0;
}
