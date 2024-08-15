#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;

        vector<vector<ll>> a(3, vector<ll>(n + 1, 0));
        vector<vector<ll>> b(3, vector<ll>(n + 1, 0));

        for (ll i = 0; i < 3; i++) 
        {
            for (ll j = 1; j <= n; j++) 
            {
                cin >> a[i][j];
                b[i][j] = b[i][j - 1] + a[i][j];
            }
        }

        bool found = false;
        vector<ll> c = {0, 1, 2};
        ll comp = (b[c[0]][n] + 2) / 3;

        do 
        {
            ll cur = 1;
            while (cur <= n && b[c[0]][cur] < comp) ++cur;

            for (ll j = cur + 1; j < n; j++) 
            {
                if (b[c[1]][j] - b[c[1]][cur] >= comp && b[c[2]][n] - b[c[2]][j] >= comp) 
                {
                    vector<pair<ll, ll>> ans(3);
                    ans[c[0]] = {1, cur};
                    ans[c[1]] = {cur + 1, j};
                    ans[c[2]] = {j + 1, n};

                    for (auto x : ans) cout << x.first << ' ' << x.second << ' ';
                    cout << endl;
                    found = true;
                    break;
                }
            }
            if (found) break;
        } 
        while (next_permutation(c.begin(), c.end()));

        if (!found) cout << -1 << endl;
    }

    return 0;
}
