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
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int mx = INT_MIN;
        map<int, int> mp;

        for (int i = 0; i < n; i++) 
        {
            int dif = a[i] - b[i];
            mx = max(mx, dif);
            mp[dif]++;
        }

        cout << mp[mx] << endl;

        for (int i = 0; i < n; i++) 
        {
            if (a[i] - b[i] == mx) 
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
