#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;

        int x = 0, y = 0;
        for (int i = 0; i < n; i++) 
        {
            int cur;
            cin >> cur;

            if (!cur && y) 
            {
                y--;
                x++;
            } 
            else if (cur >= k) y += cur;
        }

        cout << x << endl;
    }

    return 0;
}
