#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>arr(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    int player,count=0;
    cin>>player;
    for(int i=0;i<m;i++)
    {
        int temp=player^arr[i];
        int temp_cnt=0;
        while(temp>0)
        {
            if(temp&1)
            {
                temp_cnt++;
            }
            if(temp_cnt>k)
            {
                break;
            }
            temp>>=1;
        }
        if(temp_cnt<=k)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}