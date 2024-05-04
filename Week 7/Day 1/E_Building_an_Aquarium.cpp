// Problem Link: https://codeforces.com/problemset/problem/1873/E

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int x;
        cin >> n >> x;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int l = 0, r = 2e9, mid, ans, sum;
        while (l <= r)
        {
            mid = (l + r) / 2;
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += max(mid - a[i], 0LL);
            }

            if (sum <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
}