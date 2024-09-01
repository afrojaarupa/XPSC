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
        int n = s1.size(), m = s2.size();
        bool ans = false;

        for (int i = 0; i < n; i++) 
        {
            int x = 0;
            for (int j = i; j < n && x < m; j++) 
            {
                if (s1[j] != s2[x]) break;
                int y = x + 1;
                x = y;
                for (int k = j - 1; k >= 0 && y < m; k--) 
                {
                    if (s1[k] != s2[y]) break;
                    y++;
                }
                if (y == m) 
                {
                    ans = true;
                    break;
                }
            }
            if (ans) break;
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
