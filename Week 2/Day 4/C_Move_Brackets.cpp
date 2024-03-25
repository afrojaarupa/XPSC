// Problem Link: https://codeforces.com/problemset/problem/1374/C

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        stack<char> st;
        string s;
        cin >> n >> s;
        for (char c : s) 
        {
            if (st.empty())
            {
                st.push(c);
            }
            else if (c == ')' && st.top() == '(')
            {
                st.pop();
            }else{
                st.push(c);
            }  
        }
        cout << st.size()/2 << endl;
    }

    return 0;
}
