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
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++) 
        {
            sort(a[i], a[i] + m);
        }
        for (int i = m - 1; i >= 1; i--)
        {
            int x = 0;
            for (int j = 0; j < n; j++)
                {
                    if (a[j][0] < a[x][0])
                    x = j;
                }
            rotate(a[x], a[x] + 1, a[x] + i + 1);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
