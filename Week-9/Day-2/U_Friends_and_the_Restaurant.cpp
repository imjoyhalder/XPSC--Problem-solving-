#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        ar[i]-=x;
    }
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        ar[i]+=x;
    }
    sort(ar.rbegin(),ar.rend());
    int ans=0;
    int l=0,r=n-1;
    while(l<r)
    {
        if(ar[l]>-1)
        {
            if(ar[l]>=abs(ar[r]))
            {
                ans++;
                l++,r--;
            }
            else 
            {
                r--;
            }
        }
        else if(ar[l]>-1 && ar[r]>-1)
        {
            ans++;
            l++,r--;
        }
        else if(ar[l]<0 && ar[r]<0)
        {
            break;
        }
    }
    cout<<ans<<endl;
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