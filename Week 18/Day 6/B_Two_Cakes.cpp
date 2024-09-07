#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int x = min(a/i, b/(n-i));
        ans = max(ans, x);
    }

    cout << ans << endl;

    return 0;
}