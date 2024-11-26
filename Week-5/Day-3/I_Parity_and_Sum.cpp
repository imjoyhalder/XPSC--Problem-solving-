#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>even,odd;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            {
                even.push_back(a);
            }
            else 
            {
                odd.push_back(a);
            }
        }
        if(even.size()==0 || odd.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        ll n1=even.size();
        ll mx=odd.back();
        ll ans=0;
        if(mx<even[0])
        {
            cout<<(n1+1)<<endl;
            continue;
        }
        for(int i=0;i<n1;i++)
        {
            if(even[i]>mx)
            {
                cout<<n1+1<<endl;
                break;
            }
            else 
            {
                ans++;
                mx+=even[i];
            }
        }
        if(ans==n1)
        {
            cout<<ans<<endl;
        }

    }
    return 0;
}