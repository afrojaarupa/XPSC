#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        if (a[0] != n) 
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> b;
        
        for (int i = n - 1; i >= 0; i--) 
        {
            while (b.size() < a[i]) 
            {
                b.push_back(i + 1);
            }
        }

        bool ans = true;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] != b[i]) 
            {
                ans = false;
                break;
            }
        }

        if (ans) cout << "YES" << endl;
        else  cout << "NO" << endl;
    }
    
    return 0;
}
