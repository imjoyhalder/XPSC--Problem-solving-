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
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            v[i]=v[i]+i+1;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(sum>c)
            {
                cout<<i<<endl;
                break;
            }
            if(i==n-1)
            {
                cout<<n<<endl;
            }
        }
    }
    return 0;
}