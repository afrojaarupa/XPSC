#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, x;
        cin >> n >> x;

        if (x == 1) 
        {
            set<int> v;
            for (int i = 0; i < n; i++) 
            {
                int a;
                cin >> a;
                if (v.count(a)) v.erase(a);
                else v.insert(a);
            }
            cout << v.size() << endl;
            for (int num : v) 
            {
                cout << num << ' ';
            }

            cout << endl;
            continue;
        }

        int cnt = 0;
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) 
        {
            int a;
            cin >> a;
            if (a == 0) 
            {
                cnt++;
                continue;
            }
            int p = 0;
            while (a % x == 0) 
            {
                p++;
                a /= x;
            }
            mp[a].resize(70);  
            mp[a][p]++;
        }

        vector<int> r;
        for (auto &[k, v] : mp) 
        {
            int p = 1;
            for (int i = 0; i < 69; i++) 
            { 
                int l = min(v[i], v[i + 1]);
                v[i] -= l;
                v[i + 1] -= l;
                while (v[i]--) r.push_back(k * p * x);
                p *= x;
            }
            while (v[69]--) r.push_back(k * p * x);
        }

        if (cnt % 2) r.push_back(0);
        cout << r.size() << endl;
    }

    return 0;
}
