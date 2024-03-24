// Problem Link: https://codeforces.com/problemset/problem/1722/B

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a, b, ans = "YES";
        cin >> a >> b;
        for(int i= 0; i < n; i++)
        {
            if( (a[i] != b[i]) && (a[i] == 'R' || b[i] == 'R') )
            {
                ans = "NO";
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
