#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        vector<ll> x(n), y(n);
        vector<pair<ll, ll>> diff(n);

        for (int i = 0; i < n; i++) cin >> x[i];

        for (int i = 0; i < n; i++)  cin >> y[i];

        for (int i = 0; i < n; i++) 
        {
            diff[i].first = y[i] - x[i];
            diff[i].second = i;
        }

        sort(diff.begin(), diff.end(), greater<pair<int, int>>());

        ll j = n - 1, cnt = 0;

        for (int i = 0; i < n; i++) 
        {
            while (j > i && diff[i].first + diff[j].first < 0) j--;
            if (j <= i) break;
            cnt++;
            j--;
        }

        cout << cnt << endl;
    }

    return 0;
}
