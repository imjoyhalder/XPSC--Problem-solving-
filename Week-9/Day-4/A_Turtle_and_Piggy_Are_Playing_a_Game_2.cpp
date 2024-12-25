#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    bool flag=true;
    sort(ar.begin(),ar.end());
    while(ar.size()>1)
    {
       if(flag)
       {
            auto it=ar.begin();
            ar.erase(it);
            flag=false;
       }
       else 
       {
            auto it=ar.end()-1;
            ar.erase(it);
            flag=true;
       }
    }
    for(auto it:ar)
    {
        cout<<it<<endl;
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