// Problem Link: https://codeforces.com/problemset/problem/1790/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        ll a[n+5];
        map<ll,ll> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        ll ans = 0;

        for(int i = 0; i < n; i++)
        {
            while(mp[a[i]] > 0)
            {
                ans++;
                mp[a[i]]--;
                int x = a[i];
                while(mp[++x] > 0)
                {
                    mp[x]--;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
