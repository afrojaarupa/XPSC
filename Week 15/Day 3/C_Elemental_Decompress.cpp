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
        int a[n], b[n], c[n], ra[n], rb[n];
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> c[i];
            a[i] = b[i] = 0;
            ra[i + 1] = rb[i + 1] = 1;
            v[i] = {c[i], i};
        }

        sort(v.rbegin(), v.rend());

        for (int i = 0; i < n; i++) 
        {
            int k = v[i].second;
            if (ra[c[k]]) 
            {
                a[k] = c[k];
                ra[c[k]]--;
            } else 
            {
                b[k] = c[k];
                rb[c[k]]--;
            }
        }

        int r1 = n, r2 = n;
        bool ans = true;
        
        for (int i = 0; i < n && ans; i++) 
        {
            int k = v[i].second;
            if (!a[k]) 
            {
                while (!ra[r1] && r1 > 0) r1--;
                if (r1 <= 0 || r1 > b[k]) {
                    ans = false;
                    break;
                }
                ra[r1]--;
                a[k] = r1--;
            }
            else 
            {
                while (!rb[r2] && r2 > 0) r2--;
                if (r2 <= 0 || r2 > a[k]) {
                    ans = false;
                    break;
                }
                rb[r2]--;
                b[k] = r2--;
            }
        }

        if (ans) {
            for (int i = 1; i <= n; i++) 
            {
                if (ra[i] || rb[i]) 
                {
                    ans = false;
                    break;
                }
            }
        }

        if (ans) 
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
            for (int i = 0; i < n; i++) cout << b[i] << " ";
            cout << endl;
        } 
        else cout << "NO" << endl;
    }

    return 0;
}
