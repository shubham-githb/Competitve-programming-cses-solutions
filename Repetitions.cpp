#define NOMINMAX
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int res = 0, curr = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            res = max(res, curr);
            curr = 0;
        }
        curr++;
    }
    res = max(res, curr);
    cout << res;
    return 0;
}