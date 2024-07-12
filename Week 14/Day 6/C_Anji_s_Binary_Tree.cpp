#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;

        vector<vector<pair<ll, ll>>> v(n + 1);
        vector<char> s(n + 1);

        for (ll i = 1; i <= n; i++) cin >> s[i];

        for (ll i = 1; i <= n; i++) 
        {
            ll l, r;
            cin >> l >> r;
            if (l != 0) {
                ll w;
                if (s[i] == 'L') w = 0;
                else w = 1;
                v[i].emplace_back(l, w);
            }
            if (r != 0) {
                ll w;
                if (s[i] == 'R') w = 0;
                else w = 1;
                v[i].emplace_back(r, w);
            }
        }

        vector<ll> dist(n + 1, LLONG_MAX);
        stack<pair<ll, ll>> st;
        st.push({1, 0});
        dist[1] = 0;

        ll mn = LLONG_MAX;

        while (!st.empty()) 
        {
            auto [node, distance] = st.top();
            st.pop();

            bool isLeaf = true;
            for (auto& [child, w] : v[node]) 
            {
                isLeaf = false;
                if (dist[child] > distance + w) 
                {
                    dist[child] = distance + w;
                    st.push({child, dist[child]});
                }
            }

            if (isLeaf) mn = min(mn, distance);
        }

        cout << mn << endl;
    }

    return 0;
}
