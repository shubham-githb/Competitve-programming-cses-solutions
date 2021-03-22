#define NOMINMAX
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> c(3);
        int b = n / 3;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            c[v[i] % 3]++;
        }
        int ans = 0;
        for (int i = 0; i < 2; i++)
        {
            if (c[0] > b)
            {
                ans += c[0] - b;
                c[1] += c[0] - b;
                c[0] = b;
            }

            if (c[1] > b)
            {
                ans += c[1] - b;
                c[2] += c[1] - b;
                c[1] = b;
            }

            if (c[2] > b)
            {
                ans += c[2] - b;
                c[0] += c[2] - b;
                c[2] = b;
            }
        }

        cout << ans << endl;
    }
    return 0;
}