#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> b(m + 1), r(m + 1);
    vector<ll> c(m + 1);
    for (int i = 1; i <= m; i++) cin >> b[i] >> r[i] >> c[i];

    vector<ll> d(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        d[x]++;
        d[y + 1]--;
    }
    for (int i = 1; i <= m; i++) d[i] += d[i - 1];

    vector<ll> add(n + 2, 0);
    for (int i = 1; i <= m; i++)
    {
        add[b[i]] += c[i] * d[i];
        add[r[i] + 1] -= c[i] * d[i];
    }

    for (int i = 1; i <= n; i++)
    {
        add[i] += add[i - 1];
        a[i] += add[i];
    }

    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;


    return 0;
}
