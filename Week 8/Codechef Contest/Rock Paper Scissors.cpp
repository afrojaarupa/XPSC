#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;

	while(t--){
	    
	    int n;
	    string A;
	    cin >> n >> A;
	    
	    char cur, prev = '0', next;
	    int ans = 0;
	    
	    for(int i=0; i<n; i++){
	        cur = A[i];

	        if(cur != prev){
	            ans++;
	            prev = cur;
	        }
	        else{
	           prev = '0'; 
	        }
	    }
	    
	    cout << ans << endl;
	}

}