#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int bill, owes, ans;
        cin >> bill;

        owes = 100 - bill;

        ans = owes - (owes % 10);

        cout << ans << endl; 
        
    }

    return 0;
}