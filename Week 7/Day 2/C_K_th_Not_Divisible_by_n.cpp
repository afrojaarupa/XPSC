// Problem Link: https://codeforces.com/problemset/problem/1352/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << (k + (k - 1) / (n - 1)) << endl;
    }
}
