#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, l, r;
        cin >> n >> l >> r;
        
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<ll> pre(n + 1);
        for (int i = 0; i < n; i++) 
        {
            pre[i + 1] = pre[i] + a[i];
        }

        vector<int> dp(n + 1);
        int s = 0, j = -1;
        for (int i = 0; i < n; i++) 
        {
            dp[i + 1] = max(dp[i + 1], dp[i]);
            if (j < i) 
            {
                j = i;
                s = 0;
            }
            while (j < n && s < l) 
            {
                s += a[j];
                j++;
            }
            if (s >= l && s <= r)  dp[j] = max(dp[j], dp[i] + 1);
            s -= a[i];
        }

        cout << dp[n] << endl;
    }
    
    return 0;
}
