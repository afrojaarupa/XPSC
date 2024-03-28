#include <iostream>
#include <string>

using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        string ch;
        bool hash = true;
        int l = 0, cell = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i + j) % 2 == 0)
                    ch = "##";
                else
                    ch = "..";

                cout << ch;
            }
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                if ((i + j) % 2 == 0)
                    ch = "##";
                else
                    ch = "..";

                cout << ch;
            }
            cout << endl;
        }
    }

    return 0;
}
