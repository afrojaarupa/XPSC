#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    pbds<int> p1, p2;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = p1.size() - p1.order_of_key(v[i]);
        p1.insert(v[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        b[i] = p2.order_of_key(v[i]);
        p2.insert(v[i]);
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += 1LL * a[i] * b[i];
    }
    
    cout << ans << endl;
    
    return 0;
}