#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r, x, ans = 0;
    cin >> n >> l >> r >> x;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0, mx = INT_MIN, mn = INT_MAX;
        for (int j = 0; j < n; ++j)
        {
            if ((i >> j) & 1)
            {
                sum += a[j];
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
            }
        }
        if (sum >= l && sum <= r && (mx - mn) >= x)
            ans++;
    }
    cout << ans << endl;

    return 0;
}