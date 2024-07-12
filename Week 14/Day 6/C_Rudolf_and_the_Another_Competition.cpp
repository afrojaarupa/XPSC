#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m, h;
        cin >> n >> m >> h;

        pair<int, ll> p;
        ll ans = 1;

        for (int i = 0; i < n; i++) 
        {
            vector<int> v(m);
            for (int j = 0; j < m; j++)
            {
                cin >> v[j];
            }  
            sort(v.begin(), v.end());

            int cnt = 0;
            ll pn = 0, sum = 0;
            for (int j = 0; j < m; j++) 
            {
                if (sum + v[j] > h) break;
                sum += v[j];
                pn += sum;
                cnt++;
            }

            if (i == 0) p = {-cnt, pn};
            else if (make_pair(-cnt, pn) < p) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}
