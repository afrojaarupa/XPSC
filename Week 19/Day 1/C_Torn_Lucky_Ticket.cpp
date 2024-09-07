#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool asize(const string &x, const string &y) 
{
    return x.size() < y.size();
}

int main() 
{
    int n;
    cin >> n;
    ll r, ans = n;
    map<pair<ll, ll>, ll> mp;

    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), asize);

    for (const auto &c : a) 
    {
        r = c.size();

        for (int l = 1; l <= r; l++) 
        {
            if ((l + r) % 2 != 0) continue;
            ll req = 0, mid = (l + r) / 2;
            for (int i = 0; i < mid; i++) req += (c[i] - '0');
            for (int i = mid; i < r; i++) req -= (c[i] - '0');

            if (req >= 0) ans += mp[{l, req}];
        }

        string c2 = c;
        reverse(c2.begin(), c2.end());
        for (int l = 1; l <= r; l++) 
        {
            if ((l + r) % 2 != 0) continue;
            ll req = 0, mid = (l + r) / 2;
            for (int i = 0; i < mid; i++) req += (c2[i] - '0');
            for (int i = mid; i < r; i++) req -= (c2[i] - '0');

            if (req >= 0) ans += mp[{l, req}];
        }

        ll sum = 0;
        for (int i = 0; i < r; i++) sum += (c[i] - '0');
        mp[{r, sum}]++;
    }

    cout << ans << endl;

    return 0;
}
