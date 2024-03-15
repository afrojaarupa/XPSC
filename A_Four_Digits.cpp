/**   
 * Problem: A - Four Digits
 * Link: https://atcoder.jp/contests/abc222/tasks/abc222_a
 */
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    if(sz == 4) cout << s << endl;
    else 
    {
        if(sz == 1) cout << "000" << s << endl;
        if(sz == 2) cout << "00" << s << endl;
        if(sz == 3) cout << "0" << s << endl; 
    }

    return 0;
}
