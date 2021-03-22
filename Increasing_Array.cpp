#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<int> v;
    long long ans = 0;
    long long in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            ans = ans + (v[i - 1] - v[i]);
            v[i] = v[i] + (v[i - 1] - v[i]);
        }
    }

    cout << ans;
    return 0;
}
