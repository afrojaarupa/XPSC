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
        for (int i = 0; i < n; i++) cin >> v[i];

        map<tuple<int, int, int>, int> cnt;
        long long ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int x = v[i], y = v[i + 1], z = v[i + 2];

            tuple<int, int, int> triple = make_tuple(x, y, z);
            vector<tuple<int, int, int>> fromTriplet(3);
            
            fromTriplet[0] = make_tuple(0, y, z);
            fromTriplet[1] = make_tuple(x, 0, z);
            fromTriplet[2] = make_tuple(x, y, 0);

            for (tuple<int, int, int> t : fromTriplet)
            {
                ans += (cnt[t] - cnt[triple]);
                cnt[t]++;
            }
            cnt[triple]++;
        }
        cout << ans << endl;
    }
    return 0;
}