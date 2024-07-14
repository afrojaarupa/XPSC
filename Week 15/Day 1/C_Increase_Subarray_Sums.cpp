#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> mx(n + 1, -INF);
        
        for (int i = 0; i < n; i++) 
        {
            int s = 0;
            for (int j = i; j < n; j++) 
            {
                s += a[j];
                mx[j - i + 1] = max(mx[j - i + 1], s);
            }
        }

        vector<int> ans(n + 1, 0);
        
        for (int i = 0; i <= n; i++) 
        {
            int c = 0;
            for (int j = 0; j <= n; j++) 
            {
                c = max(c, (mx[j] + min(i, j) * x));
            }
            ans[i] = c;
        }

        for (int i = 0; i <= n; i++) 
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
