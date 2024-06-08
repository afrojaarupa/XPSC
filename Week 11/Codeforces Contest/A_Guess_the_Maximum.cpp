#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, prev, curr, mn = INT_MAX;
        cin >> n >> prev;

        for (int i = 1; i < n; i++)
        {
            cin >> curr;
            mn = min(mn, max(curr, prev));
            prev = curr;
        }

        cout << mn - 1 << endl;
    }

    return 0;
}
