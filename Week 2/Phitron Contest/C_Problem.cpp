#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, diff;
        cin >> a >> b;
        diff = abs(a-b);
        string ans = "NO";

        if (diff == 0 || diff % 2 == 0 || diff % 4 == 0)
        {
            ans = "YES";
        }
        
        cout << ans << endl;
    }

    return 0;
}