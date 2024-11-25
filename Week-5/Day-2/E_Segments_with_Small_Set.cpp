#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=0,r=0;
    long long ans=0;
    vector<int>v(100001,0);
    for(int i=0;i<n;i++)
    {
        if(v[a[i]]==0)
        {
            r++;
        }
        v[a[i]]++;
        while(r>k)
        {
            v[a[l]]--;
            if(v[a[l]]==0)
            {
                r--;
            }
            l++;
        }
        ans+=(i-l+1);
    }
    cout<<ans<<endl;
    return 0;
}