#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s1;
        cin >> s1;

        int mn = s1.length() + 1;
        ll p2 = 1;

        while (p2 <= (1LL << 60)) 
        {
            string s2 = to_string(p2);
            int tp = 0, sp = 0, taken = 0;
            
            while (sp < s1.length() && tp < s2.length()) 
            {
                if (s1[sp] == s2[tp]) 
                {
                    taken++;
                    tp++;
                }
                sp++;
            }

            mn = min(mn, ((int)s1.length() - taken + (int)s2.length() - taken));
            
            p2 *= 2;
        }

        cout << mn << endl;
    }

    return 0;
}
