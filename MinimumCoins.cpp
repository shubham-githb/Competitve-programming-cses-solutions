#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int> v, int n)
{
    vector<int> dp(n);
    int i, j;
    dp[0] = 0;
    for (i = 1; i < n; i++)
    {
        dp[i] = INT_MAX;
        for (j = 0; j < n; j++)
        {
            if (v[j] + j >= i)
            {
                if (dp[j] != INT_MAX)
                    dp[i] = min(dp[i], dp[j + 1]);
                break;
            }
        }
    }
    return dp[n - 1];
}

int main()
{
    vector<int> x = {3, 4, 2, 1, 2, 1};
    int n = x.size();
    cout << minJumps(x, n);
}
