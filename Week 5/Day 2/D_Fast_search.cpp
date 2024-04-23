// Problem Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        auto it1 = lower_bound(a.begin(), a.end(), l);
        auto it2 = upper_bound(a.begin(), a.end(), r);
        cout << it2-it1 << " ";
    }

    return 0;
}

