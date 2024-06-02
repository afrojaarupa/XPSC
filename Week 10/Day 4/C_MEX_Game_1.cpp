#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            freq[x]++;
        }

        int cnt = 0;
        for (int i = 0; i <= n; i++)
        {
            if (freq[i] == 1) cnt++;
            if (cnt == 2 || freq[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
