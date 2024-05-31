#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, prev, curr, ans = 0;
    cin >> n >> prev;
    for (int i = 1; i < n; i++)
    {
        cin >> curr;
        if (prev > curr)
        {
            ans += prev - curr;
        }
        else
        {
            prev = curr;
        }
    }

    cout << ans << endl;
    return 0;
}
