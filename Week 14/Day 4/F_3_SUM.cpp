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
        
        int a[10] = {}; 
        
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x; 
            a[x % 10]++; 
        }
        
        vector<int> v;
        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < min(a[i], 3); j++) 
            {
                v.push_back(i); 
            }
        }
        
        int m = v.size();
        bool ans = false;
        
        for (int i = 0; i < m && !ans; i++) 
        {
            for (int j = i + 1; j < m && !ans; j++) 
            {
                for (int k = j + 1; k < m && !ans; k++) 
                {
                    if ((v[i] + v[j] + v[k]) % 10 == 3) 
                    {
                        ans = true;
                    }
                }
            }
        }
        
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
    return 0;
}
