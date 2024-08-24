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
        string s;
        cin >> s;

        while (!s.empty() && s.back() == 'A')
            s.pop_back();

        int result = (s.size() > 1) ? (s.size() - 1) : 0;

        for (int i = 0; i < s.size() - 1 && s[i] == 'B'; i++)
            result--;

        cout << result << '\n';
    }

    return 0;
}
