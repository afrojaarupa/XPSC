#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s1, s2;
        cin >> s1 >> s2;

        int n = s1.size(), m = s2.size(), ans = n + m;
        
        for (int i = 0; i < m; i++)
        {
            int c = 0, idx = i;
            for (int j = 0; j < n && idx < m; j++)
            {
                if (s1[j] == s2[idx])
                {
                    c++;
                    idx++;
                }
            }
            ans = min(ans, n + m - c);
        }
        cout << ans << endl;
    }
    
    return 0;
}
