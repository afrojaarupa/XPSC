// Problem Link: https://codeforces.com/problemset/problem/1703/C

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        if(x >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
