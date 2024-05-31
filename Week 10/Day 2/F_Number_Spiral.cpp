#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long y, x, mx, square, ans;
        cin >> y >> x;

        mx = max(x, y);
        square = (mx - 1) * (mx - 1);

        if (mx % 2 == 0) {
            ans = (x > y) ? square + y : (mx * mx) - x + 1;
        } else {
            ans = (x > y) ? (mx * mx) - y + 1 : square + x;
        }

        cout << ans << endl;
    }
    return 0;
}