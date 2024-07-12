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
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        ll ans = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++) 
        {
            if (v[i] == 1) ans += mp[2];
            else if (v[i] == 2) ans += mp[1];

            ans += mp[v[i]];
            mp[v[i]]++;
        }
        cout << ans << endl;
    }
    
    return 0;
}
