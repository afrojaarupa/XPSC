// Problem Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(k--)
    {
        int l = 0, r = n-1, mid, val;
        cin >> val;
        bool flag = false;
        while(l <= r)
        {
            mid = (l+r)/2;
            if(a[mid] == val)
            {
                flag = true;
                break;
            }
            else if(a[mid] < val) l = mid + 1;
            else r = mid - 1;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
