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
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(is_sorted(ar.begin(),ar.end()))
        {
            cout<<0<<endl;
        }
        else 
        {
            int c=0;
            for(int i=0;i<n;i++)
            {
                int temp=abs(ar[i]-(i+1));
                if(temp%k)
                {
                    c++;
                }
            }
            if(c>2)
            {
                cout<<-1<<endl;
            }
            else if(c==2)
            {
                cout<<1<<endl;
            }
            else 
            {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}