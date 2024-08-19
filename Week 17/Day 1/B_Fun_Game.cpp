#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string x, y;
        cin >> n >> x >> y;
        
        bool ans = true;

        for (int i = 0; i < x.size() && x[i] == '0'; i++) 
        {
            if (y[i] != '0') 
            {
                ans = false;
                break;
            }
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
