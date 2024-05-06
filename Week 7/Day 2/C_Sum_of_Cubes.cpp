// Problem Link: https://codeforces.com/problemset/problem/1490/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        set<long long int> s;
        for (long long int i = 1; pow(i, 3) < x; i++)
        {
            s.insert(pow(i, 3));
        }
        bool flag = false;
        for (long long int i = 1; pow(i, 3) < x; i++)
        {
            if (s.count(x - pow(i, 3)))
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}