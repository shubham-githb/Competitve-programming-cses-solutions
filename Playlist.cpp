#include <bits/stdc++.h>
#include <set>
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
    sort(v.begin(), v.end());
    set<int, greater<int>> s1;
    for (int i = 0; i < n; i++)
    {
        s1.insert(v[i]++);
    }
    cout << s1.size();
}