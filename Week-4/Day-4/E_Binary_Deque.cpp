#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum<k)
        {
            cout<<-1<<endl;
            continue;
        }
        int l=0,min_st=INT_MAX, cur_sum=0;;
        for(int i=0;i<n;i++)
        {
            cur_sum+=v[i];
            while(cur_sum>k)
            {
                cur_sum-=v[l];
                l++;
            }
            if(cur_sum==k)
            {
                min_st=min(min_st,l+(n-i-1));
            }
        }
        cout<<min_st<<endl;

    }
    return 0;
}