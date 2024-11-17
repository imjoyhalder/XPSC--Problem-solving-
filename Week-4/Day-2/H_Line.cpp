#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long value=0;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                value+=i;
                v[i]=(n-1-i)-i;
            }
            else 
            {
                value+=(n-1-i);
                v[i]=i-(n-1-i);
            }
        }
        sort(v.rbegin(), v.rend());

        vector<long long>res(n);
        long long result=value;
        for(int i=0;i<n;i++)
        {
            if(v[i]>0)
            {
                result+=v[i];
            }
            res[i]=result;
        }
        for(int i=0;i<n;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}