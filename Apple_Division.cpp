#define NOMINMAX
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int total = 0;
        rep(i, n)
        {
            cin >> v[i];
            total += v[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < (i << n); i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (1 << j & i)
                    sum += v[j];
            }
            ans = min(ans, abs(total - sum - sum));
        }
        cout << ans;
    }
    return 0;
}