#include <bits/stdc++.h>
using namespace std;
long long int INF = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int p = 1;
        long long int ans = 0;
        for (int j = 0; j < 31; ++j)
        {
            if (k & (1 << j))
            {
                ans = (ans + p) % INF;
            }
            p *= n;
            p %= INF;
        }
        cout << ans << endl;
    }
}