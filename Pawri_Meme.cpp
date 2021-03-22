#include <bits/stdc++.h>
using namespace std;
#define lli long long int;
#define li long int
#define MOD 1000000007

void ReplaceStringInPlace(std::string &subject, const std::string &search,
                          const std::string &replace)
{
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos)
    {
        subject.replace(pos, search.length(), replace);
        pos += replace.length();
    }
}
int main()
{
    int t;
    cin >> t;
    string str1;
    while (t--)
    {

        cin >> str1;
        string str2 = "party";
        string str3 = "pawri";
        ReplaceStringInPlace(str1, str2, str3);
        cout << str1 << endl;
    }
}