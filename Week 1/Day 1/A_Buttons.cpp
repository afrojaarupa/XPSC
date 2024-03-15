/**   
 * Problem: A - Buttons
 * Link: https://atcoder.jp/contests/abc124/tasks/abc124_a
 */
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, ans1, ans2;
    cin >> a >> b;

    ans1 = a + b;
    ans2 = a + a-1;
    
    if(a > b) ans2 = a + a-1;
    else ans2 = b + b-1;
        
    cout << max(ans1,ans2) <<endl;

    return 0;
}
