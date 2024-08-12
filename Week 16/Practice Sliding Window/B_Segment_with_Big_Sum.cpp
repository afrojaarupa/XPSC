#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0, sum = 0, ans = INT_MAX;
    while(r < n)
    {
        sum += a[r];

        while(sum >= s)
        {
            ans = min (ans, r-l+1);
            sum -= a[l];
            l++;
        }
        
        r++;
    }

    if(ans == INT_MAX) ans = -1;

    cout << ans << endl;
    
    return 0;
}
