#include <bits/stdc++.h>
using namespace std;
int min_divisor(int n)
{
    for (int d = 2; d <= sqrt(n); ++d)
    {
        if (n % d == 0)
            return d;
    }
    return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        bool found = false;
        for (int i = a; i <= b; i++)
        {
            int md = min_divisor(i);
            if (md != i)
            {
                cout << md << ' ' << i - md << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
