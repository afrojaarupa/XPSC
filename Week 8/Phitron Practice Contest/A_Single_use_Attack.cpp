#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, h, ans = 1;
        cin >> x >> y >> h;

        x = x - h;
        ans += (x/y);
        
        if((x%y) != 0) ans ++;
        cout << ans << endl;
    }
    
    return 0;
}
