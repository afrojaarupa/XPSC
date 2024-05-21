#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        long long int n, m, ans = 0; 
        cin >> n >> m;
        
        for (int i = 0; i < n; i++)
        {
            long long int a, b = 1;
            cin >> a;

            ans += max(abs(a-b), abs(a-m));
        }

        cout << ans << endl;
        
    }
    return 0;
}