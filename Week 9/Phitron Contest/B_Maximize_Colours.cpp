#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int v[3] = {a, b, c}, count = 0;

        for (int i = 0; i < 3; ++i)
        {
            if (v[i] > 0)
            {
                count++;
                v[i]--;
            }
        }

        sort(v, v + 3, greater<int>());
        if (v[0] > 0 && v[1] > 0)
        {
            count++;
            v[0]--;
            v[1]--;
        }
        if (v[0] > 0 && v[2] > 0)
        {
            count++;
            v[0]--;
            v[2]--;
        }
        if (v[1] > 0 && v[2] > 0)
        {
            count++;
            v[1]--;
            v[2]--;
        }

        cout << count << endl;
    }

    return 0;
}
