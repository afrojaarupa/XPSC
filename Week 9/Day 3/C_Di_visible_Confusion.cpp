#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int n; 
        cin >> n;
        bool ans = true;
        for (int i = 1; i <= n; i++) 
        {
            int x; 
            cin >> x;
            bool found = false;
            for (int j = i + 1; j >= 2; j--) 
            { 
                if ((x%j) != 0) 
                {
                    found = true;
                    break;
                }
            }
            ans = (ans > 0) * (found > 0);
        }
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}