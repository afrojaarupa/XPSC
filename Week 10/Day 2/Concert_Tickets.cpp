#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<long long> tickets;
    long long price;
    for (int i = 0; i < n; i++)
    {
        cin >> price;
        tickets.insert(price);
    }

    long long max_price, ans;
    for (int i = 0; i < m; i++)
    {
        cin >> max_price;

        ans = -1;
        auto it = tickets.upper_bound(max_price);
        if (it != tickets.begin())
        {
            ans = *(--it);
            tickets.erase(it);
        }
        cout << ans << endl;
    }
    return 0;
}