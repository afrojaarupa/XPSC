// Problem Link: https://codeforces.com/problemset/problem/1604/A

#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; 
    cin >> n;
    int ans = 0 , k;
    for (int i = 1; i <= n; i++) {
      cin >> k;
      ans = max(ans, k - i);
    }
    cout << ans << endl;
  }
  return 0;
}
