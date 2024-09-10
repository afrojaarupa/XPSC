#include<bits/stdc++.h>
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
        vector< pair <ll, ll> > v(n);
        for(int i = 0; i < n; i++) 
        {
            int k; 
            cin >> k;

            vector<ll> a(k);
            ll mx = -1;
            for(int j = 0; j < k; j++) 
            {
                cin >> a[j];
                mx = max(mx, a[j]-j+1);
            }

            v[i] = {mx, k};
        }

        sort(v.begin(), v.end());
        int l = v[0].first, r = v[n-1].first;
        ll ans = 1e18;

        while (l <= r)
        {
            bool ok = true;
            ll mid = (l+r)/2, curr = mid;

            for(int i = 0; i < n; i++) 
            {
                if(curr >= v[i].first) curr += v[i].second;
                else 
                {
                    ok = false;
                    break;
                }
            }
            
            if(ok) 
            {
                ans = mid;
                r = mid - 1;
            } 
            else l = mid + 1;
        }      
        cout << ans << endl;
    }   

    return 0;
}