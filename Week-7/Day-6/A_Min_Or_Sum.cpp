#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            ans|=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}