#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<2<<'\n'; 
        int a=n,b=n-1;
        for(int i=1;i<n;i++)
        {
            cout<<a<<" "<<b<<'\n';
            a=(a+b+1)/2;
            b--; 
        }
    }
    return 0;
}