#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> v(n);

        for(int i = 0; i < n; i++) 
        {
            cin >> v[i].second >> v[i].first;
        }
        
        sort(v.begin(), v.end());

        long long ans = 0;
        pbds<int> p;

        for(int i = 0; i < n; i++)
        {
            ans += p.size() - p.order_of_key(v[i].second);
            p.insert(v[i].second);
        }

        cout << ans << endl;
    }
    return 0;
}
