#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, ans = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ans += x;
            if (ans < 0) ans = 0;
        }
        cout << ans << endl;
    }
}