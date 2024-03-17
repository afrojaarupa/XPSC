// Problem Link: https://atcoder.jp/contests/abc083/tasks/arc088_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y, cnt = 0;

    cin >> x >> y;

    while (x <= y)
    {
        x = x * 2;
        cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}
