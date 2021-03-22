#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    //total number of ays to place two knights on a chessboard k*k
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin >> n;
    lli k;
    for (k = 1; k <= n; k++)
    {
        //implementing our formula for every k starting from n
        cout << k * k * (k * k - 1) / 2 - 4 * (k - 1) * (k - 2) << endl;
    }
    return 0;
}