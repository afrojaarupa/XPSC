#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;

        map<int, int> mp;
        mp[0] = 1;

        int balance = 0;
        long long ans = 0;

        for (char c : s) 
        {
            if (c == '(' ) balance++; 
            else balance--; 

            ans += mp[balance];
            mp[balance]++;

           while ((!mp.empty()) && ((mp.begin()->first * 2) < balance))  
           {
                mp.erase(mp.begin());
           }
        }
        
        cout << ans << endl;
    }

    return 0;
}
