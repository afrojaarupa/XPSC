#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                flag = true;
                ans = i;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << ans << ' ' << ans + 1 << ' ' << ans + 2 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}