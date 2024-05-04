// Problem Link: https://cses.fi/problemset/task/1620

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int x;
    cin >> n >> x;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int l = 0, r = 1e18, mid, ans, sum;
    while (l <= r)
    {
        mid = (l + r) / 2;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (mid / a[i]);
            if (sum >= x) break;
            
        }

        if (sum >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}