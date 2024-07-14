#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, c, q;
        string s; 
        cin >> n >> c >> q >> s;

        ll a[c+1], b[c+1], d[c+1];
        a[0] = 0, b[0] = n;

        for(int i = 1; i <= c; i++) 
        {
            ll l, r; 
            cin >> l >> r;
            l--; r--;
            a[i] = b[i - 1];
            b[i] = a[i] + (r - l + 1);
            d[i] = a[i] - l;
        }

        while(q--) 
        {
            ll k; 
            cin >> k;
            k--;
            for(int i = c; i >= 1; i--) 
            {
                if(k < a[i]) continue;
                k -= d[i];
            }
            cout << s[k] << endl;
        }
    }
    
    return 0;
}