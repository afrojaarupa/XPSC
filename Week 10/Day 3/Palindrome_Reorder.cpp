#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};
    for (char c : s)
        freq[c - 'A']++;

    int odd_count = 0;
    string first_half = "", odd_char = "";

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odd_count++;
            odd_char = 'A' + i;
        }
        first_half += string(freq[i] / 2, 'A' + i);
    }

    if (odd_count > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());
    string palindrome = first_half + odd_char + second_half;

    cout << palindrome << endl;

    return 0;
}
