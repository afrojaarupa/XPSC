#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> v;

    for (int i = 1; i <= n; i++) 
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }
    sort(v.begin(), v.end());
    int ans = 0, mx = 0;

    for (auto it : v) 
    {
        ans += it.second;
        mx = max(mx, ans);
    }

    cout << mx << endl;

    return 0;
}