#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int unique = 0;
        for (int i = 1; i < s.size() / 2; i++)
        {
            if (s[i] != s[i - 1])
                unique++;
        }

        cout << (unique > 0 ? "YES" : "NO") << endl;
    }
}