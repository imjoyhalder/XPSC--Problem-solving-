#include<bits/stdc++.h>
using namespace std;
const int maxN = (1LL << 15);
vector<int>all_pall;
bool isPall(int x)
{
    string s=to_string(x);
    int len=s.size();
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            return false;
        }
    }
    return true;
}
void mark()
{
    for(int i=0;i<maxN;i++)
    {
        if(isPall(i))
        {
            all_pall.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    mark();
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n), cnt(maxN + 1);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
        }
        long long ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<all_pall.size();j++)
            {
                int cur=(a[i]^all_pall[j]);
                ans+=cnt[cur];
            }
        }
        cout<<(ans/2)<<endl;
    }
    return 0;
}