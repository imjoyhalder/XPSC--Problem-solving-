#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    ll n, x; 
    cin>>n>>x; 
    map<ll,ll> mp; 
    
    ll sum = 0, cnt = 0; 
    mp[sum] = 1; 
    while(n--){
        ll e; cin>>e; 
        sum += e; 

        if(mp[sum-x]){
            cnt++; 
        }
        mp[sum] = 1; 
    }
    cout<<cnt<<nl; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    solve(); 
       
    return 0;
} 