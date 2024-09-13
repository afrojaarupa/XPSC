#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v1(n - 1);
    for (ll i = 0; i < n - 1; i++) cin >> v1[i];

    ll k = n * (n + 1) / 2;

    if (v1[n - 2] > k)
    {
        cout << "NO" << endl;
        return;
    }

    v1.insert(v1.begin(), 0);

    vector<ll> v2;
    for (ll i = 1; i < n; i++)
    {
        v2.push_back(v1[i] - v1[i - 1]);
    }

    set<ll> s;
    for (ll i = 1; i <= n; i++)
    {
        s.insert(i);
    }

    ll ans = -1;
    for (ll i = 0; i < v2.size(); i++)
    {
        if (v2[i] <= n && s.count(v2[i])) s.erase(v2[i]);
        else
        {
            if (ans != -1)
            {
                cout << "NO" << endl;
                return;
            }
            ans = v2[i];
        }
    }

    if (ans == -1)
    {
        cout << "YES" << endl;
        return;
    }

    for (ll x : s)
    {
        ans -= x;
    }

    if (ans == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}