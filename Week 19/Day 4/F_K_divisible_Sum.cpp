#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n, k;
        cin >> n >> k;
        if (n == 1) 
        {
            cout << k << endl;
        } 
        else 
        {
            ll x = (k - (n % k)) % k;
            ll ans = (x + n - 1) / n;

            cout << ans + 1 << endl;
        }
    }
    
    return 0;
}
