#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    string s; 
    cin >> s;
    ll x = 0, y = 0, z = 0; 

    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] == 'o') y += x;
        else if (i > 0 && s[i-1] == 'v') 
        {
            x++;
            z += y;
        }
    }

    cout << z << endl;

    return 0;
}