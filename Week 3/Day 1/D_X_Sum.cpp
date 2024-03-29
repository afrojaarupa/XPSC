// Problem Link: https://codeforces.com/problemset/problem/1676/D

#include <bits/stdc++.h>
using namespace std;

int a[200][200];
vector<pair<int, int>> d = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
int n, m, sum, ans;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj, int x, int y)
{
    int ci = si + x;
    int cj = sj + y;
    if (valid(ci, cj))
    {
        sum += a[ci][cj];
        dfs(ci, cj, x, y);
    }
}
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = a[i][j];

                for (int k = 0; k < 4; k++)
                {
                    int ci = i + d[k].first;
                    int cj = j + d[k].second;
                    if (valid(ci, cj))
                    {
                        sum += a[ci][cj];
                        dfs(ci, cj, d[k].first, d[k].second);
                    }
                }
                ans = max(sum, ans);

            }
        }

        cout << ans << endl;
    }
    
    
    return 0;
}