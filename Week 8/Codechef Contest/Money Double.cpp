#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        long long int ans = x;
        while(y--)
        {
            if(ans < 1000)
            {
                ans += 1000;
    
            }
            else ans *= 2;
            
        }
        cout << ans << endl;
    }
    
    return 0;
}