#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long int ans=0;
        cin >> n;
        int half = n/2;
        ans = (half * 1) + (half * 12);
        if (n % 2 == 1) ans  += 6;
        
        cout << ans << endl;
    }
    
    return 0;
}
