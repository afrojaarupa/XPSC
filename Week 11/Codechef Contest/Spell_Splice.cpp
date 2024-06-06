#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i].first >> v[i].second;
        }
        
        long long mx = 0;
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                long long s = (v[i].first * v[j].second )+ (v[i].second * v[j].first);
                mx = max(mx, s);
            }
        }

        cout << mx << endl;
    }
    
    return 0;
}
