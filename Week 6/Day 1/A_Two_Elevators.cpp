#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int d1 = a - 1;
        int d2 = abs(b - c) + c - 1;

        int ans = (d1 <= d2) ? 1 : 0;
        ans += (d1 >= d2) ? 2 : 0;

        cout << ans << endl;
    }

    return 0;
}