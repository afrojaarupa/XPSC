#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int h, n; 
        cin >> h >> n;
        int a[n], c[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        set<pair<long long, int>> s;
        for(int i = 0; i < n; i++) 
        {
            s.insert({1, i});
        }

        long long ans = 1;

        while(h > 0) 
        {
            auto [ch, i] = *s.begin();
            s.erase(s.begin());

            ans = ch;
            h -= a[i];
            s.insert({ch + c[i], i});
        }

        cout << ans << endl;
    }
    
    return 0;
}
