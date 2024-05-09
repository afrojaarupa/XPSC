//  Problem Link: https://codeforces.com/problemset/problem/1850/F

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
        vector<ll> cnt(n+1, 0), mx(n+1, 0);
        for(int i = 0; i < n; i++) 
        {
            int x; 
            cin >> x;
            if(x <= n) cnt[x]++;
        }
        for(int i = 1; i <= n; i++) 
        {
            for(int j = i; j <= n; j += i) 
            {
                mx[j] += cnt[i];
            }
        }
        ll ans = INT_MIN;
        for(int i = 0; i <= n; i++) 
        {
            ans = max(ans, mx[i]);
        }
        cout << ans << endl;
    }

    return 0;
}
