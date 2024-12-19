#include<bits/stdc++.h>
using namespace std;
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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int dif=-1,z_dif=-1;
        bool flag=false;

        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                flag=true;
                break;
            }
            if(b[i]!=0)
            {
                if(dif==-1)
                {
                    dif=a[i]-b[i];
                }
                else if(a[i]-b[i]!=dif)
                {
                    flag=true;
                    break;
                }
            }
            else 
            {
                z_dif=max(z_dif,a[i]-b[i]);
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            if(dif==-1|| z_dif<=dif)

            {
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}