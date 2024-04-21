// Problem Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

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
        int l = 0, r = n-1, idx = -1, mid, val;
        cin >> val;
        while(l <= r)
        {
            mid = (l+r)/2;
            if(a[mid] <= val)
            {
                idx = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << idx + 1 << endl;
    }

    return 0;
}
