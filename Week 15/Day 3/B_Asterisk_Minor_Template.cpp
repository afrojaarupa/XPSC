#include <bits/stdc++.h>
using namespace std;

bool ans(string& s1, string& s2) 
{
    int len1 = s1.length(), len2 = s2.length();
    for (int i = 0; i <= len1 - len2; i++) 
    {
        bool found = true;
        for (int j = 0; j < len2; j++) 
        {
            if (s1[i + j] != s2[j]) 
            {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string a, b;
        cin >> a >> b;

        if (a[0] == b[0]) 
        {
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            continue;
        }

        if (a[a.length() - 1] == b[b.length() - 1]) 
        {
            cout << "YES" << endl;
            cout << "*" << a[a.length() - 1] << endl;
            continue;
        }

        bool found = false;
        for (int i = 0; i < b.length() - 1; i++) 
        {
            string sub_b = b.substr(i, 2);
            if (ans(a, sub_b)) {
                cout << "YES" << endl;
                cout << "*" << sub_b << "*" << endl;
                found = true;
                break;
            }
        }

        if (!found) cout << "NO" << endl;
    }

    return 0;
}