#include <bits/stdc++.h>
using namespace std;

int pre[2005];

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) 
        {
            int a;
            cin >> a;
            pre[i] = pre[i - 1] ^ a;
        }

        bool yes = !pre[n];
        for (int i = 1; i <= n; i++) 
        {
            for (int j = i + 1; j <= n; j++) 
            {
                if (pre[i] == (pre[j] ^ pre[i]) && pre[i] == (pre[n] ^ pre[j])) 
                {
                    yes = true;
                }
            }
        }
        
        if (yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   

    return 0;
}
