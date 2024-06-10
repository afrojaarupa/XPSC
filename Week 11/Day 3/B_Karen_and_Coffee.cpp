#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 200000;
int main() 
{
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> cnt(N + 2, 0);

    for (ll i = 0; i < n; i++) 
    {
        ll l, r;
        cin >> l >> r;
        cnt[l]++;
        cnt[r + 1]--;
    }

    for (ll i = 1; i <= N; i++) cnt[i] += cnt[i - 1];

    for (ll i = 1; i <= N; i++)  cnt[i] = (cnt[i] >= k ? 1 : 0);

    for (ll i = 1; i <= N; i++) cnt[i] += cnt[i - 1];

    while (q--) 
    {
        ll a, b;
        cin >> a >> b;
        ll ans = cnt[b] - cnt[a - 1];
        cout << ans << endl;
    }

    return 0;
}
