#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,r,b;
    cin>>t;
    while(t--)
    {
        string s[8],ans;
        int n=8;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        ans="-1";
        for(int i=0;i<n;i++)
        {
            r=b=0;
            for(int j=0;j<n;j++)
            {
                if(s[i][j]=='R')
                {
                    r++;
                }
            }
            if(r==n)
            {
                ans="R";
                break;
            }
        }
        if(ans=="R")
        {
            cout<<ans<<endl;
        }
        else 
        {
            cout<<"B"<<endl;
        }

    }
    return 0;
}