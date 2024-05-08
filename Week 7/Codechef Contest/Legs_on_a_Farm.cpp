#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans;
        cin >> n;
        ans = (n/4) + (n % 4) / 2;
        cout << ans << endl;
    }

    return 0;
}