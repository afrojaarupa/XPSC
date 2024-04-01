// Problem Link: https://codeforces.com/problemset/problem/1914/D

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
        vector<pair<ll, int>> a;
        vector<pair<ll, int>> b;
        vector<pair<ll, int>> c;

        for(int i = 0; i < n; i++) 
        {
            ll x;
            cin >> x;
            a.push_back({x, i});
        }

        for(int i = 0; i < n; i++) 
        {
            ll x;
            cin >> x;
            b.push_back({x, i});
        }

        for(int i = 0; i < n; i++) 
        {
            ll x;
            cin >> x;
            c.push_back({x, i});
        }

        sort(a.begin(), a.end(), greater<pair<ll, int> >());
        sort(b.begin(), b.end(), greater<pair<ll, int> >());
        sort(c.begin(), c.end(), greater<pair<ll, int> >());

        pair<ll, int> x, y, z;
        ll sum = 0, ans = 0;
        for (int i = 0; i < 3; i++)
        {
            x = a[i];
            for (int j = 0; j < 3; j++)
            {
                y = b[j];
                for (int k = 0; k < 3; k++)
                {
                    z = c[k];
                    if (x.second != y.second && x.second != z.second && y.second != z.second) {
                    
                        sum = x.first + y.first + z.first;
                        ans = max(ans, sum);
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
