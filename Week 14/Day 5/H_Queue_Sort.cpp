#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mn = INT_MAX, mn_i, ans = -1;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] < mn)
            {
                mn = a[i];
                mn_i = i;
            }
            
        }

        if (is_sorted(a.begin()+mn_i, a.end())) ans = mn_i;
        
        cout << ans << endl;

    }

    return 0;
}
