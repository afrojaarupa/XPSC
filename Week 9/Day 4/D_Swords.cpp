#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n;
	
	int a[n], mx = 0, gcd = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		mx = max(mx, a[i]) ;
	}
	
	long long int sum = 0, ans;
	for(int i=0; i<n; i++){
		gcd = __gcd(gcd, mx-a[i]) ;
		sum += (mx-a[i]) ;
	}
	ans = (gcd==0 ? 0 : sum/gcd );
    cout << ans << " " << gcd << endl;
	
	return 0;
}