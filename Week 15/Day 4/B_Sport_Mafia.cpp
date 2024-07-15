#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll n, k;
    cin >> n >> k;

    ll l = -1, r = n + 1;
    while ((r - l) > 1) 
    {
        ll m = (l + r) / 2;
        
        if (((n - m) * (n - m + 1) / 2 - m) > (k))
        {
            l = m;
        } 
        else r = m;
    }
    cout << r << endl;

    return 0;
}
