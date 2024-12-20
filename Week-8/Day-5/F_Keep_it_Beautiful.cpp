#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>num(n);
    ll flag=0,first=-1,last=-1;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        if(flag)
        {
            if(num[i]>=last && num[i]<=first)
            {
                last=num[i];
                cout<<1;
            }
            else 
            {
                cout<<0;
            }
        }
        else 
        {
            if(first==-1)
            {
                first=num[i];
                last=num[i];
                cout<<1;
            }
            else if(num[i]>=last)
            {
                last=num[i];
                cout<<1;
            }
            else if(first>=num[i])
            {
                last=num[i];
                flag=1;
                cout<<1;
            }
            else 
            {
                cout<<0;
            }
        }
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