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
        vector<int> v(n);
        for (int i = 0;i < n;i++) 
        {
            cin >> v[i];
        }

        map<int, int> cnt;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 2; j * j <= v[i]; j++) 
            {
                if (v[i] % j == 0) {
                    while (v[i] % j == 0) 
                    {
                        cnt[j]++;
                        v[i] /= j;
                    }
                }
            }
            if (v[i] > 1) cnt[v[i]]++;
        }

        bool ans = true;

        for (auto [x, y] : cnt) 
        {
            if (y % n != 0) {
                ans = false;
                break;
            }
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}