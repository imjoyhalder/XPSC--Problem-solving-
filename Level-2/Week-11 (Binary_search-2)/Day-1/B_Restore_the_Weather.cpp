#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    ll n,k; cin>>n>>k;
    vector<pair<ll,ll>>a(n); 
    vector<ll>b(n),ans(n); 
    for(int i=0; i<n; i++){
        ll x; cin>>x; 
        a[i].first = x; 
        a[i].second = i; 
    }   
    for(ll &x: b) cin>>x;  


    sort(all(a));
    sort(all(b)); 

    int cnt=0; 
    for(auto val: a){
        ans[val.second] = b[cnt]; 
        cnt++; 
    } 
    
    for(ll val: ans) cout<<val<<" "; 
    cout<<nl; 
    
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