#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        string ans = (min(a, s / n) * n + b) >= s ? "YES" : "NO";
        cout << ans << endl;
    }
    return 0;
}