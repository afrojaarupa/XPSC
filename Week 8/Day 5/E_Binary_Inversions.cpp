#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        ll ans = 0, z = 0;

        for (int i = n - 1; i >= 0; i--) 
        {
            if (v[i] == 0) z++;
            else ans += z;
        }

        for (int i = 0; i < n; i++) 
        {
            if (v[i] == 0) 
            {
                v[i] = 1;
                ll new_in = 0, new_z = 0;
                for (int j = n - 1; j >= 0; j--) 
                {
                    if (v[j] == 0) new_z++;
                    else new_in += new_z;
                }
                ans = max(ans, new_in);
                v[i] = 0;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) 
        {
            if (v[i] == 1) 
            {
                v[i] = 0;
                ll new_in = 0, new_z = 0;
                for (int j = n - 1; j >= 0; --j) 
                {
                    if (v[j] == 0) new_z++;
                    else new_in += new_z;
                }
                ans = max(ans, new_in);
                v[i] = 1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
