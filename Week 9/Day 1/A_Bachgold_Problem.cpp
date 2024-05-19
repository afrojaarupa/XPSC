#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> primes;

    if (n % 2 == 0) 
    {
        for (int i = 0; i < n / 2;i++) 
        {
            primes.push_back(2);
        }
    } 
    else 
    {
        for (int i = 0; i < (n / 2) - 1;i++) 
        {
            primes.push_back(2);
        }
        primes.push_back(3);
    }

    cout << primes.size() << endl;

    for (int i = 0; i < primes.size();i++) 
    {
        cout << primes[i] << " ";
    }
    cout << endl;

    return 0;
}
