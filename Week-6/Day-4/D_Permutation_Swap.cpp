#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n;
        cin>>n;
        vector<int>ar(n+1);
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            ans=__gcd(ans,abs(ar[i]-i));
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
