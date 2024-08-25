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
        set<ll> s;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            s.insert(i);
        }

        int l = 1, r = n;
        while (1) 
        {
            bool ans = 0; 
            ll mn = *s.begin(), mx = *s.rbegin();
            if(mn == a[l] || mx == a[l]) 
            {
                s.erase(a[l]);
                ans = 1;
                l++;
            } 
            else if(mn == a[r] || mx == a[r]) 
            {
                s.erase(a[r]);
                ans = 1;
                r--;
            }

            if(ans == 0 || l > r) break; 
        }
        
        if(l > r) cout << -1 << endl;
        else cout << l << " " << r << endl;
    }
    
    return 0;
}
