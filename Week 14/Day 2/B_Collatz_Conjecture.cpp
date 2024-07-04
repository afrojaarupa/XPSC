#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll x, y, k;
        cin >> x >> y >> k; 

        while (k > 0 && x != 1) 
        {
            ll conj = (x / y + 1) * y - x; 
            conj = max(1LL, conj); 
            conj = min(conj, k); 
            x += conj; 

            while (x % y == 0) 
            {
                x /= y; 
            }

            k -= conj; 
        }

        cout << x + k % (y - 1) << endl; 
    }
    
    return 0;
}
