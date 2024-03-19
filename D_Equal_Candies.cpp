#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, sum = 0, mn = INT_MAX;
        cin >> n;
        long long int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
            sum += a[i];
        }
        cout << sum - (mn*n) << endl;
    }

    return 0;
}
