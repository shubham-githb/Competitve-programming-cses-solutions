#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // int ans = 0;
    sort(v.begin(), v.end());
    int mid = v[n / 2];
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + abs(v[i] - mid);
    }
    cout << ans;
}
