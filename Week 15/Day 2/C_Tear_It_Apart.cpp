#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        int n = s.length(), ans = n, x =26;

        while (x--) 
        {
            char c = 'a' + x;
            int i = 0, cur = 0;
            while (i < n) 
            {
                int j = i;
                while (j < n && (s[j] == c) == (s[i] == c)) 
                {
                    j++;
                }
                if (s[i] != c)  cur = max(cur, j - i);
                i = j;
            }
            if (cur == 0) 
            {
                ans = 0;
                break;
            }
            int l = 0;
            while ((1 << l) <= cur) 
            {
                l++;
            }
            ans = min(ans, l);
        }
        cout << ans << endl;
    }
    
    return 0;
}
