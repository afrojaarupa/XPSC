#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{   
    int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n+1), b(n+1,0);
        for(int i = 1; i <= n; i++) cin >> a[i];

        for(int i = 2; i <= n; i++) 
        {
            if(a[i] != a[i-1]) 
            {
                ll x = i - 1;
                while (b[x] == 0) 
                {
                    b[x] = i;
                    x--;
                }
            }
        }
        b[n] = -1;
        
        ll y;
        cin >> y;
        while (y--) 
        {
            ll l, r;
            cin >> l >> r;

            if(b[l] <= r && b[l] != 0) cout << l << " " << b[l] << endl;
            else cout << -1 << " " << -1 << endl;
        }

        cout << endl;
    }
    
    return 0;
}