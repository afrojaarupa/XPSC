#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        ll l = 0, r = min(2000000000LL, 2*n); 

        while (r-l > 1) 
        {
            ll m = (l + r) >> 1;

            if (m * (m - 1) / 2 + m < n) l = m;
            else r = m;
        }

        ll y = n - r * (r - 1) / 2;

        if ((r + 1)*r/2 <= n) cout << min(r+y, r+1+n - (r+1) * r/2) << endl;
        else cout << r+y << endl;
    }

    return 0;
}





