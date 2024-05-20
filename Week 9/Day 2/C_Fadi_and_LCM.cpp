#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;

    cin >> x;
    ll ans = 1; 
    for(ll i = 1 ; i * i <= x ; i++)
    {
        if(x % i == 0 && lcm(i, x / i) == x)
        {
            ans = i;
            break;
        } 
    }
    cout << ans << " " << x / ans << endl;
    return 0;
}
