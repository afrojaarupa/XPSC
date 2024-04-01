// Problem Link: https://codeforces.com/problemset/problem/1840/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        int n, k;
        ll q;
        cin >> n >> k >> q;

        ll ans = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;

            if (val <= q) cnt++;
            else cnt = 0; 

            if (cnt >= k) ans += cnt - k + 1;
        }
        
        cout << ans << endl;
    }

    return 0;
}
