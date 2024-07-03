#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m;
        
        string a, b;
        cin >> a >> b;
        
        int ans = m;  
        
        for (int i = 0; i <= n - m; i++) 
        {
            int d = 0;
            for (int j = 0; j < m; j++) 
            {
                if (a[i + j] != b[j])  d++;
            }
            ans = min(ans, d);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
