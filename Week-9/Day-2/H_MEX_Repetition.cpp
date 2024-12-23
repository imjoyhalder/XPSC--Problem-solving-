#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll t_sum=n*(n+1)/2;
    ll c_sum=0;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        c_sum+=ar[i];
    }
    ar.push_back(t_sum - c_sum);
    k=k%(n+1);
    for(int i=0;i<n;i++)
    {
        ll idx=i-k;
        if(idx<0)
        {
            idx+=(n+1);
        }
        cout<<ar[idx]<<" ";
    }
    cout<<endl;
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