#include "bits/stdc++.h"
using namespace std;

int main() {  
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    string ans = "NO";
    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        for (int j = 0; j < n; ++j){
            sum += (i & (1 << j)) ? a[j] : -a[j];
        }
            
        if (sum % 360 == 0) {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;    
    return 0;
}   
