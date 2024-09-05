#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;

        vector<pair<int, int>> a(26, {0, 0});
        
        for (int i = 0; i < 26; i++)  a[i].second = i;  
        for (int i = 0; i < n; i++) a[s[i] - 'a'].first++;  

        sort(a.begin(), a.end(), greater<pair<int, int>>());

        while (a[0].first > a[1].first) 
        {
            cout << char('a' + a[0].second);
            a[0].first--;
        }

        queue<pair<int, int>> q;
        for (int i = 0; i < 26; i++) {
            q.push(a[i]);
        }

        while (!q.empty()) 
        {
            auto p = q.front();
            q.pop();
            if (p.first == 0) continue;
            cout << char('a' + p.second);
            p.first--;
            q.push(p);
        }

        cout << endl;
    }
    
    return 0;
}
