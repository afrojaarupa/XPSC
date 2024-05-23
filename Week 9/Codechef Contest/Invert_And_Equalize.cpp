#include <bits/stdc++.h>
using namespace std;

int minOperations(string s, int n) {
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        if (i == 0 || s[i] != s[i - 1]) {
            count++;
        }
    }
    
    if (count == 1) {
        return 0;
    }
    
    if (s[0] == s[n - 1]) {
        count--;
    }
    
    return count / 2;
}


int main() {
	int t;cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << minOperations(s, n) << endl;

    }

    return 0;
}