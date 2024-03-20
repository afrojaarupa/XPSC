// Problem Link: https://codeforces.com/problemset/problem/1744/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        s += s;

        int cnt = 0, ans = 0, start = 0;
        for (int i = 0; i < n * 2; i++)
        {
            if (s[i] == c)
                start = 1;
            if (s[i] == 'g')
                ans = max(ans, cnt), start = 0, cnt = 0;
            if (start == 1)
                cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}
