#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        string ans = "NO";
        if ((a + b) % 3 == 0 && (min(a, b) * 2 >= max(a, b)))
        {
            ans = "YES";
        }
        cout << ans << endl;
    }
    return 0;
}
