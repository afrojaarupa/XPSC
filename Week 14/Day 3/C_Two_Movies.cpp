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
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int x = 0, y = 0, c = 0, d = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 && b[i] <= 0) x++;
            else if (a[i] <= 0 && b[i] == 1) y++;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1 && b[i] == -1) c++;
            else if (a[i] == 1 && b[i] == 1) d++;
        }
        
        for (int i = 0; i < c; i++)
        {
            if (x < y) y--;
            else  x--;
        }
        for (int i = 0; i < d; i++)
        {
            if (x < y) x++;
            else y++;
        }

        cout << min(x, y) << endl;
    }
    
    return 0;
}
