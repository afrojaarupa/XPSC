#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+5;

ll a[N], b[N], c[N];
vector<pair<ll, ll>> v;
map<ll, ll> mp;

ll solve(ll cur) 
{
    if(mp.count(cur)) return mp[cur];

    ll low = 0, high = v.size()-1, idx = -1;
    while(low <= high) 
    {
        ll mid = (low+high)/2;
        if(v[mid].second<=cur) 
        {
            idx = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }

    if(idx == -1) return mp[cur]=0;

    ll diff = v[idx].first;
    ll need = v[idx].second;

    ll smithing = (cur-need)/diff+1;
    ll due = cur - smithing * diff;
    ll ans = smithing*2 + solve(due);
    return mp[cur] = ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     
    ll n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) cin >> a[i];    
    for(int i = 0; i < n; i++) 
    {
        cin >> b[i];
        v.push_back({a[i]-b[i], a[i]});
    }    

    for(int i = 0; i < m; i++) cin >> c[i];

    sort(v.begin(), v.end());
    vector<pair<ll, ll>> tmp;

    for(int i = 0; i < n; i++) 
    {
        if(tmp.empty()) 
        {
            tmp.push_back(v[i]);
            continue;
        }
        if(tmp.back().second > v[i].second) tmp.push_back(v[i]);
    }

    v = tmp;

    ll ans = 0;
    for(ll i = 0; i < m; i++) 
    {
        ll q = c[i];
        ans += solve(q);
    }
    cout << ans << endl;
    
    return 0;
}