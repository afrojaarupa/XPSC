#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, x, y;
        cin >> n >> x >> y;

        int ans1 = n*x, ans2 = 0;
    
        if(n % 2 == 0)
        {
            ans2 = (n/2)*y;
        }
        else
        {
            ans2 = ((n-1)/2) *y;
            ans2 += x;
        } 
        cout << max(ans1, ans2) << endl;

    }
    
    return 0;
}
