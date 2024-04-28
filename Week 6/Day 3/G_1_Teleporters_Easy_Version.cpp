#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v[i] = i + x + 1;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n && c >= v[i]; i++)
        {
            c -= v[i];
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}