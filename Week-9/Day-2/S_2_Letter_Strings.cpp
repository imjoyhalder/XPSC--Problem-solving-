#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    map<char,ll>mp1,mp2;
    map<string,ll>occ;
    vector<string>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp1[a[i][0]]++;
        mp2[a[i][1]]++;
        occ[a[i]]++;
    }
    ll ans=0;

    for(int i=0;i<n;i++)
    {
        string s=a[i];
        ans+=max(0LL,mp1[s[0]]-occ[s]);
        ans+=max(0LL,mp2[s[1]]-occ[s]);

        mp1[s[0]]--;
        mp2[s[1]]--;
        occ[s]--;
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