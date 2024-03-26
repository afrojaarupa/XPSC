// Problem Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int n;
    ll k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0, ans = 0;
    multiset<ll> ml;
    while(r < n)
    {
        ml.insert(a[r]);
        ll mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if((mx-mn) <= k) ans += (r - l + 1);
        else
        {
            while(l < r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if(mx-mn <= k) break;
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if(mx-mn <= k) ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << endl;
    
    return 0;
}
