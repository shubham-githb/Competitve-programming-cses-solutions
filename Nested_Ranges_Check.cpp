#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> intervals(n);
    vector<vector<int>> mI;
    vector<int> a;
    vector<int> b;
    int i = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        intervals.push_back(x);
        intervals.push_back(y);
        //sort(intervals.begin(), intervals.end());
        mI.push_back(intervals);
        // sort(mI.begin(), mI.end());
        vector<int> tempInterval = mI[0];
        for (auto it : mI)
        {
            if (tempInterval[0] <= it[0] && tempInterval[1] >= it[1])
            {
                a.push_back(1);
            }
            else
            {
                a.push_back(0);
            }
        }
        cout << " " << a[i];
    }
}