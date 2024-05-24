#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, x = 0;
        cin >> a >> b;
        while (x != 1 )
        {
            x = __gcd(a, b);
            b /= x;
            if (b == 1) break;
        }
        
        cout << (b == 1 ? "Yes" : "No") << endl;
    }
    return 0;
}