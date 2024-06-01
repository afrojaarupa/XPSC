#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;
    string s, r;
    cin >> n >> s;
    r = s;
    reverse(r.begin(), r.end());

    map<char, vector<int>> pos_s, pos_r;
    for(int i = 0; i < n; i++)
    {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vector<int> prmt(n);
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        for(int i = 0; i < pos_s[ch].size(); i++)
        {
            prmt[pos_r[ch][i]] = pos_s[ch][i];
        }
    }

    pbds<int> p;
    long long ans = 0;
    for(int i = n-1; i >= 0; i--)
    {
        ans += p.order_of_key(prmt[i]);
        p.insert(prmt[i]);
    }

    cout << ans << endl;
    
    return 0;
}