#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else return false;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < s1.size(); i++)
    {
        if (is_vowel(s1[i]) != is_vowel(s2[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    
    return 0;
}