#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int i = 1;
        for (int i = 1; i <= 1000; i++)
        {
            cout << i * i << endl;
            cin >> ans;
            if (ans == 0)
            {
                continue;
            }
            else if (ans == 1)
            {
                break;
            }
            else
            {
                break;
            }
        }
        if (ans == -1)
        {
            break;
        }
    }

    return 0;
}