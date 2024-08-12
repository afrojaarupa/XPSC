// Problem Link: https://codeforces.com/problemset/problem/1610/B

#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(int a[], int x, int n)
{   
    int l=0, r=n-1;
    while(l < r)
    {
        if (a[l] == x) l++;
        else if( a[r] == x) r--;
        else if(a[l] != a[r]) return false;
        else{
            l++;
            r--;
        }
    }
    return true;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = n-1;
        bool flag = true;
        while(l < r)
        {
            if (a[l] != a[r])
            {
                flag = is_palindrome(a, a[l], n) || is_palindrome(a, a[r], n);
                break;
            }
            l++; r--;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}