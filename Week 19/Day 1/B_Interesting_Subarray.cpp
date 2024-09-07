#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        } 

        bool ans = true;
        for(int i = 1; i < n; i++) 
        {
            if(abs(a[i] - a[i-1]) >= 2) 
            {
                cout << "YES" << endl;
                cout << i << " " << i+1 << endl;
                ans = false;
                break;
            }
        }
        if(ans) cout << "NO" << endl;
    }
    
    return 0;
}
