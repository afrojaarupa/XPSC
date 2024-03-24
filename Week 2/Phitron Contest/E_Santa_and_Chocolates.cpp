#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        string ans = sum < n || (sum % n != 0 && k == 0) ? "NO" : "YES";
        cout << ans << endl; 
    }

    return 0;
}