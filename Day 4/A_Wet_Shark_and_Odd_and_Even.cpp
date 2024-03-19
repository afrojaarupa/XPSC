#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a[n], mn_odd = LLONG_MAX, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 1)
            mn_odd = min(mn_odd, a[i]);
    }

    if (sum % 2 == 1)
        sum -= mn_odd;

    cout << sum << endl;

    return 0;
}
