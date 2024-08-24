#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool found = false;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != '0' && stoll(s.substr(0, i)) < stoll(s.substr(i))) {
                cout << s.substr(0, i) << " " << s.substr(i) << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << -1 << endl;
    }
    return 0;
}
