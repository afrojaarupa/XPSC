
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
        cin >> n;
        int ans = 0;
        if((n-2) >= 0) ans += 1;
        ans += (n-2)/7;
        cout << ans << endl;

    }


    return 0;
}
