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
        string s, ans = "";
        cin >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            char c;
            if (s[i] == '0')
            {
                int digit = stoi(s.substr(i - 2, 2)) - 1;
                c = 'a' + digit;
                i -= 2;
            }
            else
            {
                c = s[i] + '0';
            }
            ans = c + ans;
        }

        cout << ans << endl;
    }

    return 0;
}