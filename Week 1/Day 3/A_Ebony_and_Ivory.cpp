// Problem Link: https://codeforces.com/problemset/problem/633/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t_dmg;
    cin >> a >> b >> t_dmg;
    bool flag = false;
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= 1000; j++)
        {
            if((a*i) + (b*j) == t_dmg)
            {
                flag = true;
                break;
            }
        }
    }
    if(flag) cout << "Yes" <<endl;
    else cout << "No" <<endl;

    return 0;
}
