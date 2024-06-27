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
        
        map<int, int> mp;
        
        for (int i = 1; i <= n; i++) 
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        
        int s = 0, d = 0;
        
        for (auto &[i, j] : mp) 
        {
            if(j == 1) s++;
            if(j > 1) d++;
        }
        
        cout << d + (s + 1) / 2 << endl;
    }
    
    return 0;
}
