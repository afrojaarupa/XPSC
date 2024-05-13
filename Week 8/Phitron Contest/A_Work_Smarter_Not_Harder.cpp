#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, v1, v2;
        cin >> l >> v1 >> v2;

        float tor = ceil((float)l / (float)v1);
        float hare = ceil((float)l / (float)v2);

        int ans = -1;
        if (tor > hare)
        {
            ans = tor - (hare + 1);
        }

        cout << ans << endl;
    }

    return 0;
}
