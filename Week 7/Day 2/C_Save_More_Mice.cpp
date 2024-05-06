// Problem Link: https://codeforces.com/problemset/problem/1593/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> x(k);
        for (int i = 0; i < k; i++)
        {
            cin >> x[i];
        }

        sort(x.begin(), x.end(), greater<int>());

        int ans = 0;
        long long sum = 0;

        for (int i = 0; i < k; i++)
        {
            if (x[i] > sum)
            {
                sum += n - x[i];
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
