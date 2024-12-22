#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int>ar(n);
        ll c=0,ans=1;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]==1)
            {
                c++;
            }
            else if(ar[i]==0)
            {
                ans=ans*2;
            }
        }
        cout<<ans*c<<endl;
        
    }
    return 0;
}