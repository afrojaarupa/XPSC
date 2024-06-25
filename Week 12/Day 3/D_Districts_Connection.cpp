#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) 
        {
            cin >> a[j];
        }
        vector<pair<int, int>> res;
        int idx = -1;
        for (int i = 1; i < n; i++) 
        {
            if (a[i] != a[0]) 
            {
                idx = i;
                res.push_back({1, i + 1});
            }
        }
        if (idx == -1) 
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; i++) 
        {
            if (a[i] == a[0]) 
            {
                res.push_back({idx + 1, i + 1});
            }
        }
        cout << "YES" << endl;
        for (int j = 0; j < res.size(); j++) 
        {
            cout << res[j].first << " " << res[j].second << endl;
        }
    }
    
    return 0;
}
