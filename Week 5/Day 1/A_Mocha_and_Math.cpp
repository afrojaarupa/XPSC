// Problem Link: https://codeforces.com/problemset/problem/1559/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, ans;
        cin >> n >> ans;
        for (int i = 1; i < n; i++)
        {
            cin >> x;
            ans &= x;
        }

        cout << ans << endl;
    }
    return 0;
}
