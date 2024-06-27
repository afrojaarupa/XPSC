#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, d;
        ll c;
        cin >> n >> c >> d;
        
        ll a[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        
        sort(a, a + n, greater<ll>());
        
        int l = 0, r = d + 2;
        
        while (l < r) 
        {
            int m = l + (r - l + 1) / 2;
            ll tot = 0;
            
            for (int i = 0; i < d; i++) 
            {
                if ((i % m) < n) 
                {
                    tot += a[i % m];
                }
            }
            
            if (tot >= c) l = m;
            else r = m - 1;
        }
        
        if (l == d + 2) cout << "Infinity" << endl;
        else if (l == 0) cout << "Impossible" << endl;
        else cout << l - 1 << endl;
    }
    
    return 0;
}
