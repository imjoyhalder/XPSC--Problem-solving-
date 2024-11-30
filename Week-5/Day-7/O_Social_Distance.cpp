#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve()
{
	int i,j,n,k,ans=0;
	cin>>n>>k;
	string s;
	cin>>s;
	set<int> st;
	for(i=0;i<n;i++)
	{
		if(s[i]=='1')
		st.insert(i);
	}
	for(i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			auto it=st.lower_bound(i-k);
			if(it==st.end() or *it>i+k)
			{
				ans++;
				s[i]='1';
				st.insert(i);
			}
		}
	}
	cout<<ans<<endl;
}
 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        solve(); 
    }
       
    return 0;
} 