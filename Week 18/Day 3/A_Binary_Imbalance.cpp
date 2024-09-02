#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;

        int cnt = 0;
        for (char c : s) 
        {
            if (c == '1') cnt++;
        }

        if (cnt == n) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
