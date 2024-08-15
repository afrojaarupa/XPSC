#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m, k;
        string s;
        cin >> n >> m >> k >> s;

        int a = m - 1, b = 0, c = 0;

        for (char ch : s) 
        {
            if (ch == 'L')  a = m;

            else if (ch == 'W') 
            {
                if (a <= 0) b++;
            } 
            else 
            {
                if (a <= 0) c++;
            }
            a--;
            if (b > k) c++;
        }

        if (c > 0)  cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
