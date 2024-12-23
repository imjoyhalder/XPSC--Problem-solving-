#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int one=0,zero=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else 
        {
            zero++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            if(one>0)
            {
                one--;
            }
            else 
            {
                break;
            }
        }
        else if(s[i]=='1')
        {
            if(zero>0)
            {
                zero--;
            }
            else 
            {
                break;
            }
        }
    }
    cout<<one+zero<<endl;
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