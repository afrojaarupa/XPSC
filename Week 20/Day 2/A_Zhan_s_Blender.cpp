#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        x = min(x, y);

        cout << (n + x - 1) / x << endl;
    }

    return 0;
    
}