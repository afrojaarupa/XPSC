#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        int need = (b + 10) - a;
        if( (a > b+10) || (need == 0)) cout << "0" << endl;
        else if(need == 1) cout << "1" << endl;
        else
        {
            int ex = 0;
            ans += (need/3);
            if(need % 3 != 0)
            {
                ans += (need % 3) / 2;
            }
            ex = (need%3) % 2;
            cout << ans+ex << endl;
        }
    }

    return 0;
}
