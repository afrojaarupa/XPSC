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

        bool ans = false;

        for (int i = 0; i <= n - 3; i++) 
        {
            if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '1') 
            {
                ans = true;
                break;
            }
        }

        int cnt = 0;
        for (int i = 0; i <= n - 2; i++) 
        {
            if (s[i] == '1' && s[i+1] == '1') 
            {
                cnt++;
                if (cnt >= 2) 
                {
                    ans = true;
                    break;
                }
            }
        }

        if (!ans) 
        {
            for (int i = 0; i <= n - 2; i++) 
            {
                if (s[i] == '1' && s[i+1] == '1') 
                {
                    if (s[0] == '1' || s[n-1] == '1') ans = true;
                    break;
                }
            }
        }

        if (s[0] == '1' && s[n-1] == '1') ans = true;

        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}
