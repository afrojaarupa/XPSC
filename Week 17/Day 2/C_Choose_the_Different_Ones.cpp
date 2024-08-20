#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> a(n), b(m), c(4, 0), cnt(k + 1, 0);

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (a[i] <= k) cnt[a[i]] |= 1;
        }
        
        for (int i = 0; i < m; i++) 
        {
            cin >> b[i];
            if (b[i] <= k) cnt[b[i]] |= 2;
        }

        for (int i = 1; i <= k; i++) 
        {
            c[cnt[i]]++;
        }

        if ((c[1] > k/2) || (c[2] > k/2) || (c[1] + c[2] + c[3] != k)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}
