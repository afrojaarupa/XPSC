#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
	{
        ll n, m, k = 0;
        cin >> n >> m;
        vector<ll> a;
        vector<bool> vis(200105, false); 

        while (n--) 
		{
            int x;
            cin >> x;
            a.resize(x + 1);

            for (int i = 0; i <= x + 5; i++) 
			{
                vis[i] = false;
            }

            for (int i = 1; i <= x; i++) 
			{
                cin >> a[i];
                if (a[i] <= x + 4) vis[a[i]] = true;
            }

            ll mx = 0;
            while (vis[mx]) ++mx;
            vis[mx] = true;
            while (vis[mx]) ++mx;

            k = max(k, mx);
        }

        if (k >= m) cout << (m + 1) * k << endl;
        else cout << k * k + (m + k) * (m - k + 1) / 2 << endl;
    }

    return 0;
}
