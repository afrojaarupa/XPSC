#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];            
        

        string ans = "YES";
        
        if (a[0] != a[n-1]) ans = "NO";
        
        for (int i = 1; i < n; i++)
        {
            if (a[0] > a[i])
            {
                ans = "NO";
                break;
            }
            
        }

        cout << ans << endl;
    }
    return 0;
}
