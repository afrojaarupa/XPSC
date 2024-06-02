#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k + 1), b(k + 1);
        a[0] = 0, b[0] = 0;

        for (int i = 1; i <= k; i++)  cin >> a[i];
        for (int i = 1; i <= k; i++) cin >> b[i];
        while (q--)
        {
            ll d;
            cin >> d;
            int id = lower_bound(a.begin(), a.end(), d) - a.begin();
            if (a[id] == d) cout << b[id] << " ";
            else
            {
                ll up = a[id] - a[id - 1];
                ll dw = b[id] - b[id - 1];
                cout << b[id - 1] + ((d - a[id - 1]) * dw) / up << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
