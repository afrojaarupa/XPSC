#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, l, ans = 0;
    map<int, int> mp;
    cin >> n;

    l = 1;
    for (int r = 1; r <= n; r++)
    {
        cin >> x;
        if (mp[x])
        {
            ans = max(ans, r - l);
            l = max(l, mp[x] + 1);
            mp[x] = r;
        }
        else
        {
            ans = max(ans, r - l + 1);
            mp[x] = r;
        }
    }
    ans = max(n - l + 1, ans);
    cout << ans << endl;
    return 0;
}