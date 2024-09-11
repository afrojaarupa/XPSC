#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n, a, b;
        cin >> n >> a >> b;

        if (a >= b) cout << n * a << endl;
        else 
        {
            ll x = min(n, (b - a + 1));
            b = b - (x - 1);
            ll y = (x) * ((2 * b) + (x - 1));
            y /= 2;
            y += (n - x) * a;
            
            cout << y << endl;
        }
    }
    return 0;
}