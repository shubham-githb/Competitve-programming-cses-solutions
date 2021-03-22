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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int mi = min(v[i], v[i + 1]);
            int ma = max(v[i], v[i + 1]);
            while (ma > mi * 2)
            {
                mi = mi * 2;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}