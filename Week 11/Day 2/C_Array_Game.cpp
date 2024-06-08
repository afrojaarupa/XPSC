#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
#define ll long long

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        if (k >= 3)
        {
            cout << "0" << endl;
            continue;
        }

        sort(v.begin(), v.end());
        ll ans = v[0];
        
        for (int i = 0; i < n - 1; i++) ans = min(ans, v[i + 1] - v[i]);
        if (k == 1)
        {
            cout << ans << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                ll d = v[i] - v[j];
                ll p = lower_bound(begin(v), end(v), d) - begin(v);

                if (p < n) ans = min(ans, v[p] - d);
                if (p > 0) ans = min(ans, d - v[p - 1]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}