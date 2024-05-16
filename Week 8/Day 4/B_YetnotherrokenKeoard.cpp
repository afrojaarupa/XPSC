#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, ans = "";
        cin >> s;
        int small = 0, capital = 0;

        for (int i = s.size() - 1; i >= 0; --i)
        {
            char c = s[i];
            if (islower(c))
            {
                if (c == 'b')
                    small++;
                else if (small)
                    small--;
                else
                    ans += c;
            }
            else
            {
                if (c == 'B')
                    capital++;
                else if (capital)
                    capital--;
                else
                    ans += c;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}