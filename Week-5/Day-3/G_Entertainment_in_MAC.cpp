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
        string rev=s;
        reverse(rev.begin(),rev.end());
        if(s<=rev)
        {
            cout<<s<<endl;
        }
        else 
        {
            cout<<rev<<s<<endl;
        }
    }
    return 0;
}