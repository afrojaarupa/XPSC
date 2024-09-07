#include <bits/stdc++.h>
using namespace std;

map<string, long long> dp;
vector<long long> a, b;
long long l;

long long select(int i, int n, int m) 
{
    if (i == l) return 0;

    string key = to_string(i) + "," + to_string(n) + "," + to_string(m);

    if (dp.find(key) != dp.end()) return dp[key];

    if ((n > 0 && a[i] > b[i]) || m == 0) dp[key] = a[i] + select(i + 1, n - 1, m);
    
    else 
    {
        dp[key] = b[i] + select(i + 1, n, m - 1);
    }
    return dp[key];
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, m;
        cin >> n >> m;
        l = n + m + 1;

        a.resize(l);
        b.resize(l);
        for (int i = 0; i < l; i++) cin >> a[i];
        for (int i = 0; i < l; i++) cin >> b[i];

        dp.clear();

        long long ans = 0;

        for (int i = 0; i < l; i++) 
        {
            cout << ans + select(i + 1, n, m) << " ";
            if ((n > 0 && a[i] > b[i]) || m == 0) 
            {
                ans += a[i];
                n--;
            } 
            else 
            {
                ans += b[i];
                m--;
            }
        }
        cout << endl;
    }

    return 0;
}
