#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s1, s2;
        cin >> n >> s1;


        if(s1[0] != '9') 
        {
            for(int i = 0; i < n; i++) 
            {
                ll x = s1 [i] - '0';
                ll y = 9 - x;
                s2 += y + '0'; 
            }
        } 
        else 
        {
            ll y, c = 0;
            for(int i = n-1; i >= 0; i--) 
            {
                ll x = s1[i] - '0';
                x += c;
                if(x > 1) 
                {
                    y = 11 - x;
                    c = 1;
                } 
                else
                { 
                    y= 1 - x;
                    c = 0;
                }
                s2 += y + '0';
            } 

            reverse(s2.begin(), s2.end());
        }
        cout << s2 << endl;
    }
    
    return 0;
}
