#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, ans;
        cin >> n;

        ans = (n / 9) * 45;

        for (ll i = 1; i <= n % 9; i++)
        {
            if (i % 9 == 0)
            {
                ans += 9;
            }
            else
            {
                ans += i % 9;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
