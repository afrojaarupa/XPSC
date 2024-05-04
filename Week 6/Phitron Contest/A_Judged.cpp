#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        if((a + b + c + d + e) >= 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}