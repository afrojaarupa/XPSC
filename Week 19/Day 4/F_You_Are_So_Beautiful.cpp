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
        int a[n];
        int b[n] = {0};
        set<int> s;

        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = n - 1; i >= 0; i--) 
        {
            if (s.find(a[i]) == s.end()) 
            {
                b[i] = 1;
                s.insert(a[i]);
            }
        }

        for (int i = n - 2; i >= 0; i--) 
        {
            b[i] += b[i + 1];
        }

        s.clear();
        ll ans = 0;

        for (int i = 0; i < n; i++) 
        {
            if (s.find(a[i]) == s.end()) 
            {
                ans += b[i];
                s.insert(a[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
