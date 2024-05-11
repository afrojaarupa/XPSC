// Problem Link: https://www.codechef.com/problems/MAXIMSCORE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = INT_MAX;
        for (int i = 1; i < n - 1; i++)
        {
            int score = max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            ans = min(ans, score);
        }
        ans = min(ans, abs(a[0] - a[1]));
        ans = min(ans, abs(a[n - 1] - a[n - 2]));
        cout << ans << endl;
    }
    return 0;
}
