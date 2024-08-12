#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int n, m;
    cin >> n >> m;
    ll a[n], b[m];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int l = 0, r = 0;
    ll ans = 0;
    while( l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, cur = a[l];
        while( l < n && a[l] == cur)
        {
            cnt1++;
            l++;
        }

        while(b[r] < cur)
        {
            r++;
        }

        while( r < m && b[r] == cur)
        {
            cnt2++;
            r++;
        }
        ans += (1LL* cnt1 * cnt2);
    }

    cout << ans << endl;
    
    return 0;
}
