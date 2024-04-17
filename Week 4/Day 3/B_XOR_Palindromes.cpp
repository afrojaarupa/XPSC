// Problem Link: https://codeforces.com/problemset/problem/1867/B

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, ans = 0, mx_1 = 0, mx_2 = 0;
        string s;

        cin >> n >> s;

        string result(n + 1, '0');

        for (int i = 0; i <= n / 2 - 1; i++)
        {
            if (s[i] == s[n - i - 1]) mx_2++;
            else ans++;
        }

        if (n % 2 == 1) mx_1++;

        for (int j = 0; j <= mx_2; j++)
        {
            for (int k = 0; k <= mx_1; k++)
            {
                result[ans + j * 2 + k] = '1';
            }
        }

        cout << result << endl;
    }

    return 0;
}

