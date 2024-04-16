// Problem Link: https://codeforces.com/problemset/problem/1527/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = 0;
        while ((1 << k) <= n) k++;
        cout << (1 << (k - 1)) - 1 << endl;
    }
    
    return 0;
}
