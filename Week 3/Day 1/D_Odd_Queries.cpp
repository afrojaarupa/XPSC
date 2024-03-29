// Problem Link: https://codeforces.com/problemset/problem/1807/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        ll a[n+1], pre[n+1];
        ll sum = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        pre[0] = 0;
        pre[1] = a[1];
        for(int i = 2; i <= n; i++)
        {
            pre[i] = a[i] + pre[i-1];
        }
        while(q--)
        {
            int l, r , k;
            cin >> l >> r >> k;
            ll sum = (pre[n] - pre[r] + pre[l-1]) + k*(r-l+1);
            if((sum % 2) != 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}
