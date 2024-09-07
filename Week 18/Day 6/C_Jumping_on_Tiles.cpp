#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string x;
        cin >> x;
        int n = x.size();
        vector<int> val(n);
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            val[i] = x[i] - 'a' + 1;
        }

        int mn = val[0];
        int mx = val[n - 1];

        for (int i = 1; i < n - 1; i++)
        {
            if ((mn <= mx && val[i] >= mn && val[i] <= mx) || (mn > mx && val[i] <= mn && val[i] >= mx))
            {
                v.push_back({val[i], i + 1});
            }
        }

        if (mn <= mx)
        {
            sort(v.begin(), v.end());
            cout << (mx - mn) << " " << v.size() + 2 << endl;
        }
        else
        {
            sort(v.rbegin(), v.rend());
            cout << (mn - mx) << " " << v.size() + 2 << endl;
        }

        cout << 1 << " ";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].second << " ";
        }

        cout << n << endl;
    }

    return 0;
}
