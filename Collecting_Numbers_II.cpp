#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x;
    cin>>n>>m;
    int ans=1;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[i] = {x,i};
    }
    sort(a.begin(),a.end());
    while(m--)
    {
        int a,b;
        cin>>a>>b;
    }
}