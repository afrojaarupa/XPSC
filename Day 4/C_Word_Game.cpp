// Problem Link: https://codeforces.com/problemset/problem/1722/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a=0, b=0, c=0;
        cin >> n;
        string s1[n], s2[n], s3[n];
        map<string, int> mp1, mp2, mp3;
        set<string> s;
        for(int i = 0; i < n; i++){
            cin >> s1[i];
            mp1[s1[i]]++;
            s.insert(s1[i]);
        }
        for(int i = 0; i < n; i++){
            cin >> s2[i];
            mp2[s2[i]]++;
            s.insert(s2[i]);
        }
        for(int i = 0; i < n; i++){
            cin >> s3[i];
            mp3[s3[i]]++;
            s.insert(s3[i]);
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            int count = 0;
            if (mp1[*it]) count++;
            if (mp2[*it]) count++;
            if (mp3[*it]) count++;

            if (count == 1)
            {
                if (mp1[*it]) a += 3;
                else if(mp2[*it]) b += 3;
                else c += 3; 
            }else if(count == 2){
                if (mp1[*it]) a++;
                if(mp2[*it]) b++;
                if(mp3[*it]) c++;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}
