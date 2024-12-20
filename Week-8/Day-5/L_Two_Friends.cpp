#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>ar(n+5);
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    ll f=0;
    for(int i=1;i<=n;i++)
    {
        ll a=ar[i];
        if(ar[a]==i)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<2<<endl;
    }
    else 
    {
        cout<<3<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}