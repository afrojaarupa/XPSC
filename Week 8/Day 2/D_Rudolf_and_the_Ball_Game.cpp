// Problem Link: https://www.codechef.com/problems/STRAME?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m, z;
        cin >> n >> m >> z;
        set<int> s;
        s.insert(z);
        for (int i = 0; i < m; i++) 
        {
            int x;
            char ch;
            cin >> x >> ch;
            set<int> s2;
            for (int u : s) {
                if (ch == '?' || ch == '0') {
                    s2.insert((u + x - 1) % n + 1);
                }
                if (ch == '?' || ch == '1') {
                    s2.insert((u - x - 1 + n) % n + 1);
                }
            }
            s = move(s2);
        }
        cout << s.size() << endl;
        for (auto& x : s) 
        {
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
