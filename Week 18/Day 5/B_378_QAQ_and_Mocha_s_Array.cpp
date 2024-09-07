#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (a[i] == 1) cnt = 1;
        }

        if (cnt) cout << "Yes" << endl;
        else 
        {
            sort(a.begin(), a.end());
            vector<int> b;
            for (int i = 1; i < n; i++) 
            {
                if (a[i] % a[0]) b.push_back(a[i]);
            }
            bool ans = true;
            if (!b.empty()) 
            {
                for (int i = 1; i < b.size(); i++) 
                {
                    if (b[i] % b[0]) 
                    {
                        ans = false;
                        break;
                    }
                }
            }
            
            if (ans) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}
