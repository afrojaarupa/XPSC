#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    ll n, k;
    cin >> n >> k;
    vector<ll> div;
    for(ll i = 1; i*i <= n; i++)
    {
        if((n % i) == 0) 
        {
            div.push_back(i);
            if((n / i) != i) div.push_back(n/i);
        }
        
    }
    sort(div.begin(), div.end());

    if(k <= div.size()) cout << div[k - 1] << endl;
    else cout << "-1" << endl;

    return 0;
}