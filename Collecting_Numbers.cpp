#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    int ans = 1;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = {x, i};
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
        ans += a[i].second < a[i - 1].second;
    cout << ans;
}