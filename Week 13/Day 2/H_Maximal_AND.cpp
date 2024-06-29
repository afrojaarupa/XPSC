#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k, ans = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 30; i >= 0; i--)
        {
            int c = 0;
            for (int j = 0; j < n; j++)
            {
                if (!(a[j] & (1 << i)))
                {
                    c++;
                }
            }
            if (c <= k)
            {
                k -= c;
                ans += (1 << i);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
