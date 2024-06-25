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
        priority_queue<pair<int, int>> pq;
        map<int, int> mp;
        
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        
        for (auto it = mp.begin(); it != mp.end(); ++it) 
        {
            int x = it->first;
            int y = it->second;
            pq.push({y, x});
        }
        
        int sz = n;
        while (pq.size() >= 2) 
        {
            pair<int, int> p1 = pq.top();
            pq.pop();
            pair<int, int> p2 = pq.top();
            pq.pop();
            int cnt1 = p1.first, x1 = p1.second;
            int cnt2 = p2.first, x2 = p2.second;
            
            cnt1--;
            cnt2--;
            sz -= 2;
            
            if (cnt1 > 0) pq.push({cnt1, x1});
            if (cnt2 > 0) pq.push({cnt2, x2});
        }
        
        cout << sz << endl;
    }
    
    return 0;
}
