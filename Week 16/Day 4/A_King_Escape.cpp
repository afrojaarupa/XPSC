#include <iostream>
using namespace std;

int main() 
{
    int n, a1, a2, b1, b2, c1, c2;
    cin >> n >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    bool ans = false;
    
    if (((b1 < a1 && c1 < a1) || (b1 > a1 && c1 > a1)) && ((b2 < a2 && c2 < a2) || (b2 > a2 && c2 > a2))) 
    {
        ans = true;
    }

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
