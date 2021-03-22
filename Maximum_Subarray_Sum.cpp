#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + v[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    cout << max_so_far;
}