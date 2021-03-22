#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> v;

    do
    {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}