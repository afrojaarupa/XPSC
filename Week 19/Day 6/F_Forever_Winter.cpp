#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m;
        
        vector<int> cnt(n + 1, 0);
        
        for (int i = 0; i < m; i++) 
        {
            int u, v;
            cin >> u >> v;
            cnt[u]++;
            cnt[v]++;
        }
        
        map<int, int> mp;
        for (int i = 1; i <= n; i++) 
        {
            mp[cnt[i]]++;
        }
        
        vector<int> v;
        for (auto it = mp.begin(); it != mp.end(); it++) 
        {
            v.push_back(it->second);
        }
        
        sort(v.begin(), v.end());
        
        if (v.size() == 3)
        {
            cout << v[1] << ' ' << v[2]/v[1] << endl;
        } 
        else 
        {
            cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << endl;
        }
    }

    return 0;
}
