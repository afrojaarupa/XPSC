#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        
        deque<char> s(str.begin(), str.end());

        while (!s.empty() && s.front() == 'W')
            s.pop_front();

        while (!s.empty() && s.back() == 'W')
            s.pop_back();

        cout << s.size() << endl;
    }

    return 0;
}
