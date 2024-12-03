#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    ll x,y; 
    cin>>x>>y; 

    ll ans = (y+1)/2, xx = 0; 
    
    if(y%2==1){
        xx = (y/2)*7+11;
    }
    else{
        xx = (y/2)*7; 
    }
    if(x<=xx){
        cout<<ans<<nl; 
    }
    else{
        ll baki = x-xx; 
        cout<<ans+(baki+14)/15<<endl; 
    }
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