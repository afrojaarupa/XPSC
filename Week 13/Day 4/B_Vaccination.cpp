#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k, d, w;
        cin >> n >> k >> d >> w;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int x = a[0], y = 0, mn = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - x - w > d || y >= k)
            {
                mn++;
                x = a[i];
                y = 1;
            }
            else y++;
        }
        if (y > 0) mn++;

        cout << mn << endl;   
    }
    
    return 0;
}
