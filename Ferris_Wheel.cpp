#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int i = 0;
    int j = n - 1;
    int c = 0;
    while (i <= j)
    {
        if (a[j] + a[i] > w)
            j--;
        else
        {
            i++;
            j--;
        }
        c++;
    }
    cout << c << endl;
}