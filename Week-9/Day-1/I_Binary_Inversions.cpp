#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(const vector<int>& a, int n) {
    ll res = 0, one = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            one++;
        } else {
            res += one;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll ans = solve(ar, n);
        int id = -1;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==0)
            {
                ar[i]=1;
                id=i;
                break;
            }
        }
        ans = max(ans, solve(ar, n));
        if(id!= -1)
        {
            ar[id]=0;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(ar[i]==1)
            {
                ar[i]=0;
                break;
            }
        }
        ans = max(ans, solve(ar, n));
        cout<<ans<<endl;
    }
    return 0;
}