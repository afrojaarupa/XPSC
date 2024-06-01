#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    long long a[n], sum = 0;
    int l = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        while (sum > x) sum -= a[l++];
        if (sum == x) ans++;
    }

    cout << ans << endl;
    
    return 0;
}
