#include <bits/stdc++.h>
using namespace std;
#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using pbds = tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> v1(n), v2(n);
        set<int> s1, s2;
        pbds p1, p2;

        for (int i = 0; i < n; i++) 
        {
            cin >> v1[i];
            s1.insert(v1[i]);
        }

        for (int i = 0; i < n; i++) 
        {
            cin >> v2[i];
            s2.insert(v2[i]);
        }

        if (s1 != s2) 
        {
            cout << "NO" << endl;
            continue;
        }

        ll x = 0, y = 0;

        for (int i = n - 1; i >= 0; i--) 
        {
            p1.insert(v1[i]);
            x += p1.order_of_key(v1[i]);

            p2.insert(v2[i]);
            y += p2.order_of_key(v2[i]);
        }

        if (x % 2 == y % 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
