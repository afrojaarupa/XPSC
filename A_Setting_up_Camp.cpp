#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int introvert, extrovert, universal, ans = 0, sum;
        cin >> introvert >> extrovert >> universal;
        ans += introvert;
        vector<int> v;
        while(true)
        {
            if(extrovert <= 0) break;
            else if(extrovert % 3 == 0)
            {
                ans += (extrovert / 3);
                break;
            }
            else
            {
                extrovert--;
                v.push_back(1);
            }
        }
        int sz = v.size();
        if(sz < 3 && universal >= (3-sz))
        {
            while(true)
            {
                if(sz % 3 == 0) 
                {
                    ans += 1;
                    break;
                }
                else 
                {
                    sz++;
                    universal--;
                }
            }
        }
        if(universal == 0) cout << ans << endl;
        else
        {
            v.clear();
            while(true)
            {
                if(universal % 3 == 0)
                {
                    ans += universal/3;
                    break;
                }
                else
                {
                    universal--;
                    v.push_back(1);
                }
                while(true)
                {
                    sz=v.size();
                    v.clear();
                    if(sz % 2 == 0)
                    {
                        ans += sz/2;
                    }
                    else
                    {
                        sz--;
                        v.push_back(1);
                    }
                }
                ans+=v.size();
            } 
        }
        cout<<ans<<endl;
    }

    return 0;
}
