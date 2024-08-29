#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int q;
    cin >> q;
    while (q--) 
    {
        string s, t, a, b;
        cin >> s >> t;
        
        int n = s.length(), m = t.length(), x = __gcd(n, m);


        for (int i = 0; i < m/x; i++) a += s;
        for (int i = 0; i < n/x; i++) b += t;

        if (a == b) cout << a << endl;
        else  cout << "-1" << endl;
    }
    
    return 0;
}
