#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
   
    while (t--)
    {
        long long l, r, ans = 0;
        cin >> l >> r;

        while (r > 1)
        {
            ans++;
            r /= 2;
        }
        cout << ans << endl;
        
    }
    

    return 0;
}