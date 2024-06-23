#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x, y, z;
        cin >> x >> y >> z;

        int ans1, ans2, ans3, f_ans; 
        ans1 =   abs(x-x) + abs(y-x) + abs(z-x); 
        ans2 =   abs(x-y) + abs(y-y) + abs(z-y); 
        ans3 =   abs(x-z) + abs(y-z) + abs(z-z); 
        
        f_ans = min (ans1, ans2);
        cout << min (f_ans, ans3) << endl;
    }
    
    return 0;
}
