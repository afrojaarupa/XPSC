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

        sort(a.begin(), a.end());

        if (n % 2 == 1) 
        {
            cout << "NO" << endl;
            continue;
        }

        bool ans = true;
        for (int i = 0; i < n / 2; i++) 
        {
            if (a[i] == a[i + n / 2] || (i + 1 < n / 2 && a[i + 1] == a[i + n / 2])) 
            {
                ans = false;
                break;
            }
        }

        if (ans) 
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++) 
            {
                cout << a[i] << " " << a[i + n / 2] << " ";
            }
            cout  << endl;
        } 
        else cout << "NO" << endl;
    }
    
    return 0;
}
