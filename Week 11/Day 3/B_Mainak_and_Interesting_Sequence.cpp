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

        if (m < n || (n % 2 == 0 && m % 2 == 1)) cout << "NO" << endl;
        else 
        {
            cout << "YES" << endl;
            if (n % 2 == 1) 
            {
                for (int i = 1; i < n; ++i) 
                {
                    cout << "1 ";
                }
                cout << m - n + 1 << endl;
            } 
            else 
            {
                for (int i = 2; i < n; ++i) cout << "1 ";
                cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
            }
        }
    }

    return 0;
}
