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
        set<int> s1[n];
        set<int> s2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < x; j++)
            {
                int y;
                cin >> y;
                s1[i].insert(y);
                s2.insert(y);
            }
        }
        int cnt = s2.size(), ans = 0;
        for (int i = 1; i <= 50; i++)
        {
            s2.clear();
            for (int j = 0; j < n; j++)
            {
                if (s1[j].count(i) == 0)
                {
                    s2.insert(s1[j].begin(), s1[j].end());
                }
                    
            }
            if (ans < s2.size() && cnt > s2.size())
            {
                ans = s2.size();
            }
        }
        cout << ans << endl;
    }
}