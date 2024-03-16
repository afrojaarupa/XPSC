//  Problem Link: https://atcoder.jp/contests/abc209/tasks/abc209_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = (b - a) + 1;
    if(ans <= 1) cout << "0" << endl;
    else cout << ans << endl;

    return 0;
}
