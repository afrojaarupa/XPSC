#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        ll ans = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = 0; i < n; i++)
        {
            if(a[i] != i)
            {
                ans += abs(a[i] - i);
            }
            
        }
        cout << ans << endl;
    }

    return 0;
}
