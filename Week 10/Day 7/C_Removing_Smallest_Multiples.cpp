#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        
        cin >> n >> s;

        vector<bool> a(n); 
        vector<int> cost(n);

        for (int i = 0; i < n; i++) 
        {
            if(s[i] == '1') a[i] = s[i];
        }

        long long ans = 0;

        for (int i = n - 1; i >= 0; i--) 
        {
            for (int j = i; j < n; j += (i + 1)) 
            {
                if (a[j]) break; 
                cost[j] = (i + 1);
            }
        }

        for (int i = 0; i < n; i++) if (!a[i]) ans += cost[i];

        cout << ans << endl;
    }

    return 0;
}
