#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, sum1 = 0, sum2 = 0;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = 0; i < n; i++)
        {
            if(i < (n/2)) sum1 += a[i];
            else sum2 += a[i];
        }
        cout << sum2 - sum1 << endl;
    }

    return 0;
}