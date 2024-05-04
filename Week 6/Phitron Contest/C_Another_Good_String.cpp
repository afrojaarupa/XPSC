#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, count = 1, mx = 1;
        cin >> n >> q;
        string s;
        cin >> s;

        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == s[i])
            {
                count++;
                mx = max(count, mx);
            }
            else
            {
                count = 1;
            }
        }

        cout << mx << " ";

        char c, prev = s[n - 1];
        for (int i = 0; i < q; i++)
        {
            cin >> c;
            if (prev == c)
            {
                count++;
                mx = max(count, mx);
            }
            else
            {
                count = 1;
                prev = c;
            }
            cout << mx << " ";
        }

        cout << endl;
    }

    return 0;
}