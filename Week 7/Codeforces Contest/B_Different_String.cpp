#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l = 0, r = s.size() - 1;
        bool flag = false;
        for(int i = 1; i <= r; i++)
        {
            if(s[0] != s[i]){
                flag = true;
                r = i;
                break;
            }
        }
       if(!flag) cout << "NO" << endl;
       else
       {
            swap(s[0], s[r]);
            cout << "YES" << endl << s << endl;
       }
    }

    return 0;
}
