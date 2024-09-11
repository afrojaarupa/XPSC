#include <bits/stdc++.h>
using namespace std;
 
const int INF = 1e9;
const string s[] = {"BG", "BR", "BY", "GR", "GY", "RY"};
 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            char c[5];
            cin >> c;
            a[i] = find(s, s + 6, c) - s;
        }
        vector<vector<int>> l(n), r(n);

        for (int i = 0; i < 2; i++) 
        {
            vector<int> last(6, -INF);
            for (int j = 0; j < n; ++j) 
            {
                last[a[j]] = (i ? n - j - 1 : j);
                (i ? r[n - j - 1] : l[j]) = last;
            }
            reverse(a.begin(), a.end());
        }
        while (q--) 
        {
            int x, y;
            cin >> x >> y;
            x--; y--;
            int ans = INF;
            for (int j = 0; j < 6; j++) 
            {
                if (a[x] + j != 5 && j + a[y] != 5) 
                {
                    ans = min(ans, abs(x - l[x][j]) + abs(l[x][j] - y));
                    ans = min(ans, abs(x - r[x][j]) + abs(r[x][j] - y));
                }
            }

            if (ans > INF / 2) ans = -1;
            cout << ans << endl;
        }
    }
    
    return 0;
}