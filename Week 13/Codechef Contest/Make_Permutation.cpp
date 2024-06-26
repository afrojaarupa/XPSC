#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, cnt = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == n) cnt++;
        } 
        sort(a, a+n);
        string ans = "YES";

        for (int i = 0; i < n; i++)
        {
            if (a[i] > (i+1))
            {
                ans = "NO";
                break;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
