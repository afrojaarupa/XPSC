#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a, b, c, d;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N') a.push_back(i);
        if (s[i] == 'S') b.push_back(i);
        if (s[i] == 'W') c.push_back(i);
        if (s[i] == 'E') d.push_back(i);
    }
    vector<char> ans(n);
    int i = 0, sum1 = 0, sum2 = 0;
    for (i = 0; i < min(a.size(), b.size()); i++)
    {
        if (i % 2 == 0)
        {
            ans[a[i]] = 'R';
            ans[b[i]] = 'R';
        }
        else
        {
            ans[a[i]] = 'H';
            ans[b[i]] = 'H';
        }
    }
    for (; i < max(a.size(), b.size()); i += 2)
    {
        if (i < b.size())
        {
            if (i + 1 == b.size())
            {
                cout << "NO" << endl;
                return;
            }
            ans[b[i]] = 'R';
            ans[b[i + 1]] = 'H';
        }
        else if (i < a.size())
        {
            if (i + 1 == a.size())
            {
                cout << "NO" << endl;
                return;
            }
            ans[a[i]] = 'R';
            ans[a[i + 1]] = 'H';
        }
    }
    i = 0;
    for (; i < min(c.size(), d.size()); i++)
    {
        if (i % 2 != 0)
        {
            ans[c[i]] = 'R';
            ans[d[i]] = 'R';
        }
        else
        {
            ans[c[i]] = 'H';
            ans[d[i]] = 'H';
        }
    }
    for (; i < max(c.size(), d.size()); i += 2)
    {
        if (i < d.size())
        {
            if (i + 1 == d.size())
            {
                cout << "NO" << endl;
                return;
            }
            ans[d[i]] = 'R';
            ans[d[i + 1]] = 'H';
        }
        else if (i < c.size())
        {
            if (i + 1 == c.size())
            {
                cout << "NO" << endl;
                return;
            }
            ans[c[i]] = 'R';
            ans[c[i + 1]] = 'H';
        }
    }
    for (char ch : ans)
        if (ch == 'R') sum1++;
        else sum2++;
    if (sum1 == 0 || sum2 == 0)
    {
        cout << "NO" << endl;
        return;
    }
    for (char ch : ans) cout << ch;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}