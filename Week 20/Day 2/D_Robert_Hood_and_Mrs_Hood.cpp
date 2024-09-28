#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k, d;
        cin >> n >> d >> k;

        vector<int> a(n + 1), b(n + 1);

        for (int i = 0; i < k; i++) 
        {
            int x, y;
            cin >> x >> y;
            a[x]++;
            b[y]++;
        }

        for (int i = 0; i < n; i++) a[i + 1] += a[i];
        for (int i = 0; i < n; i++) b[i + 1] += b[i];

        int h = 0, mr = 0, mrs = 0, l = 1e9;

        for (int i = d; i <= n; i++) 
        {
            int cur = a[i] - b[i - d];
            if (cur > h) 
            {
                h = cur;
                mr = i - d + 1;
            }
            if (cur < l) 
            {
                l = cur;
                mrs = i - d + 1;
            }
        }

        cout << mr << ' ' << mrs << endl;
    }

    return 0;
}
