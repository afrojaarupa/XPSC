#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i];
        ll sum = 0;
        for (ll num : v) 
        {
            sum += num;
        }
        ll mx = (n * (n + 1)) / 2 - sum;
        
        v.push_back(mx);

        ll s = k % (n + 1);
        for (ll i = 0; i < n; i++) 
        {
            ll idx = (n - s + i + 1) % (n + 1); 
            cout << v[idx] << " ";
        }
        cout << endl;
    }

    return 0;
}
