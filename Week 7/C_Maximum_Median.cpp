// Problem Link: https://codeforces.com/problemset/problem/1201/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x;
    cin >> n >> x;
    vector<long long int> a(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    long long int l = 1, r = 2e9, mid, ans, sum;
    while (l < r)
    {
        mid = (l + r) / 2;
        sum = 0;
        for (long long int i = n/2; i < n; i++)
        {
            if (mid > a[i])
            {
                sum += mid - a[i];
            }            
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