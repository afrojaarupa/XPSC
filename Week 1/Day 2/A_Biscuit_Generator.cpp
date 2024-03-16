//  Problem Link: https://atcoder.jp/contests/abc125/tasks/abc125_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t, ans = 0;
    cin >> a >> b >> t;

    ans = (t / a) * b;

    cout << ans << endl;
    
    return 0;
}
