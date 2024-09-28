#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        ll ans = 0;
        vector<int> v(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
            ans += v[i];
        }

        cout << ans - 2 * v[n - 2] << endl;
    }

    return 0;
}
