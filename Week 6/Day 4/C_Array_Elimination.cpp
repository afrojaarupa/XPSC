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
        int x, a[n], b[31] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            for (int j = 0; j < 31; j++)
            {
                if (x & (1 << j)) b[j]++;
            }
        }

        for (int k = 1; k <= n; k++)
        {
            bool possible = true;
            for (int j = 0; j < 31; j++)
            {
                if (b[j] % k != 0)
                {
                    possible = false;
                    break;
                }
            }
            if (possible) cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}