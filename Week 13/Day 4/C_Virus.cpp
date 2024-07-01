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
        
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        vector<int> v;
        for (int i = 1; i < m; i++)
        {
            v.push_back(a[i] - a[i - 1] - 1);
        }
        
        int tmp = a.front() - 1 + (n - a.back());
        if (tmp > 0) v.push_back(tmp);
            
        sort(v.begin(), v.end(), greater<int>());
        
        long long ans = 0;
        int cnt = 0;
       for (int i = 0; i < v.size(); i++) 
       {
            if ((v[i] - cnt * 2 ) > 0) 
            {
                int ad = max(1, v[i] - cnt * 2 - 1);
                ans += ad;
            }
            cnt += 2;
        }
        cout << n - ans << endl;
    }
    
    return 0;
}
