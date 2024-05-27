#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                x = gcd(x, a[i]);
            else if (i % 2 == 1)
                y = gcd(y, a[i]);
        }

        bool gx = true, gy = true;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && a[i] % y == 0)
                gy = false;
            else if (i % 2 == 1 && a[i] % x == 0)
                gx = false;
        }

        cout << (gx ? x : (gy ? y : 0)) << endl;
    }
    return 0;
}
