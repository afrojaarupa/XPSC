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
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) 
        {
            multiset<int> s(a.begin(), a.end());

            for (int j = 0; j < i; j++) 
            {
                auto it = s.upper_bound(i - j);
                if (it == s.begin()) break;

                s.erase(--it);

                if (!s.empty()) 
                {
                    int mn = *s.begin();
                    s.erase(s.begin());
                    s.insert(mn + i - j);
                }
            }

            if (s.size() + i == n) 
            {
                ans = i;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
