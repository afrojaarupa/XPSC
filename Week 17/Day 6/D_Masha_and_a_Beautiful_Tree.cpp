#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int m;
        cin >> m;
        int a[m];
        
        for (int i = 0; i < m; i++) cin >> a[i];

        int ans = 0;
        bool sorted = true;

        for (int size = 1; size < m; size *= 2) 
        {
            for (int i = 0; i < m; i += 2 * size) 
            {
                int mid = i + size, end = min(i + 2 * size, m);
                
                int l = a[i], r = a[mid];
                
                for (int j = i + 1; j < mid; j++) 
                {
                    if (a[j] > l) l = a[j];
                }

                for (int j = mid + 1; j < end; j++) 
                {
                    if (a[j] > r) r = a[j];
                }

                if (l > r) 
                {
                    ans++;
                    for (int j = 0; j < mid - i; j++) swap(a[i + j], a[mid + j]);
                }
            }
        }

        for (int i = 1; i < m; i++) 
        {
            if (a[i - 1] > a[i]) 
            {
                sorted = false;
                break;
            }
        }

        if (sorted) cout << ans << endl;
        else cout << -1 << endl;
    }

    return 0;
}
