#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int negatives = 0, sum = 0, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
                negatives++;
            sum += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }
        if (negatives % 2 == 1)
            sum -= (2 * mn);
        cout << sum << endl;
    }
    return 0;
}