#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;
        long long int a[n], b[n];

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        
        for(int i = 0, j = 0; i < n; i++, j++) 
        {
            if((a[i] <= (b[i]*2)) && (b[i] <= a[i]*2))
                ans ++;
        }

        cout << ans << endl;
    }
    
    return 0;
}
