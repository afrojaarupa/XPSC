#include <bits/stdc++.h>
using namespace std;

int LCS(const string X, const string Y, int m, int n)
{
    int lcs_length = 0;
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
                lcs_length = max(lcs_length, lookup[i][j]);
            }
        }
    }
    return lcs_length;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int m = a.size(), n = b.size();
        int lcs_len = LCS(a, b, m, n);
        int ans = (m - lcs_len) + (n - lcs_len);

        cout << ans << endl;
    }

    return 0;
}