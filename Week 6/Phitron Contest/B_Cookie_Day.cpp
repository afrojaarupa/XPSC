#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k, ans = INT_MAX;
        cin >> n >> k;
        long long int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            if((a[i]%k < ans) && a[i] >= k)
            {
                ans = a[i] % k;
            }
        }
        if(ans == INT_MAX) cout << "-1" << endl;
        else cout << ans << endl;
    }
    return 0;
}