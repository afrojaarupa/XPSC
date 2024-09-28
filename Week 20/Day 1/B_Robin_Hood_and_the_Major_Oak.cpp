#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;

        int sum = (n + 1) * n / 2 - (n - k) * (n - k + 1) / 2;

        if (sum % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
