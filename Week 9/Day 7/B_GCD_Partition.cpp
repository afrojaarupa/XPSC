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
        vector<int> a(n);
        long long int sum = 0, cur = 0, ans = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            cur += a[i];
            sum -= a[i];
            ans = max(ans, gcd(sum, cur));
        }
        cout << ans << endl;
    }
    return 0;
}
