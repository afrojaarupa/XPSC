#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k; 
        cin >> n >> k;
        vector<int> cnt(31, 0), a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            for(int j = 30; j >= 0; j--) 
            {
                if(a[i] & (1 << j))
                {
                    cnt[j]++;
                } 
            }
        }
        int ans = 0;
        for(int i = 30; i >= 0; i--) 
        {
            int dif = n - cnt[i];
            if(dif <= k) 
            {
                k -= dif;
                ans += (1 << i);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
