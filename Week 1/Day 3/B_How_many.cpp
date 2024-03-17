// Problem Link: https://atcoder.jp/contests/abc214/tasks/abc214_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, cnt = 0;
    cin >> s >> t;

    for(int a = 0;a <= s; a++)
    {
        for(int b = 0; a+b <= s; b++)
        {
            for(int c = 0; a+b+c <= s; c++)
            {
                if(a*b*c <= t) cnt++;
            }
        }
    }
    cout << cnt <<endl;
    
    return 0;
}
