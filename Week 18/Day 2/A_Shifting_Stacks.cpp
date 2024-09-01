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
        cin >> n;
        ll sum = 0;
        bool ans = true;
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            sum += x;
            if (sum >= i) sum -= i;
            else ans = false;
        }
        if (ans)  cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}