#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> factors;

    for (ll i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            ll p = 1;
            while (n % i == 0) 
            {
                n /= i;
                p *= i;
            }
            factors.push_back(p);
        }
    }
    if (n > 1) factors.push_back(n);

    int s = factors.size();
    ll min_a = LLONG_MAX, min_b = LLONG_MAX;

    for (int i = 0; i < (1 << s); i++) 
    {
        ll a = 1, b = 1;
        for (int j = 0; j < s; j++) 
        {
            if (i & (1 << j))  a *= factors[j];
            else  b *= factors[j];
        }
        if (max(a, b) < max(min_a, min_b)) 
        {
            min_a = a;
            min_b = b;
        }
    }

    cout << min_a << " " << min_b << endl;
    return 0;
}
