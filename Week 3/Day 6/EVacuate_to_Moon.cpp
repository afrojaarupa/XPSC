// Problem Link: https://www.codechef.com/problems/MOONSOON?tab=statement

#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
	int t;
    cin>>t;
    while (t--)
    {
        int n,m,h;
        cin >> n >> m >> h;
        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        
        ll x = min(n,m);
        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end(), greater<ll>());
        
        ll ans=0;
        for (ll i = 0; i < x; i++)
        {
            ans += min(b[i] * h, a[i]);
        }
        
        cout<<ans<<endl;   
    }
	return 0;
}