#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    //    ios_base::sync_with_stdio(false);
    //    cin.tie(nullptr);
    //    cout.tie(nullptr);

    // Fuck Ratings, I'm in Love with Experience.
    // Once a Charas, Always a CHARAS.

    int t = 1;
    //    cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v;
        int i = 1, j = 2;
        while (j <= n)
        {
            v.pb(j);
            j += 2;
        }
        while (i <= n)
        {
            v.pb(i);
            i += 2;
        }
        if (n <= 3 and n != 1)
        {
            cout << "NO SOLUTION";
        }
        else if (n == 1)
            cout << 1;
        else
        {
            rep(i, v.size())
            {
                cout << v[i] << " ";
            }
        }
    }
    return 0;
}
