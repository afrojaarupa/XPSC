#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, int> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll x = a[i] + a[j];
            mp[x]++;
        }
    }

    int ans = 0;
    for (auto [x, y] : mp)
    {
        ans = max(ans, y);
    }

    cout << ans << endl;

    return 0;
}
