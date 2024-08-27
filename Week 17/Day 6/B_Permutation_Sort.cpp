#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, cnt=0;
        cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            if(a[i] != i) cnt++;
        }

        if(cnt == 0) cout << "0" << endl;

        else if(a[1] == 1 || a[n] == n) cout <<  "1"<< endl;
        else if(a[1] == n && a[n] == 1) cout << "3" << endl;

        else cout << "2" << endl;
    }
    
    return 0;
}
