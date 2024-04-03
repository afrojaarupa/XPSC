// Problem Link: https://codeforces.com/problemset/problem/1843/C

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            if ((s[i] == s[i + 1]) || (s[i] == '0' && s[i + 1] == '1'))
            {
                ans += 2;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}