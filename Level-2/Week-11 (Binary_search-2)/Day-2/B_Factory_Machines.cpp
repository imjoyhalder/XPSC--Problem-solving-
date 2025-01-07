#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    ll n, t; 
    cin>>n>>t; 
    vector<ll>arr(n); 
    for(ll &x: arr) cin>>x; 

    auto ok = [&](ll seconds){
        ll cnt = 0; 
        for(ll i=0; i<n; i++){
            cnt+= (seconds/arr[i]); 
            if(cnt>=t){
                return true; 
            }
        }
        return false;  
    }; 

    ll l = 1, r = 1e18, ans , mid; 
    while(l<=r){
        ll mid = (l+r)/2; 
        if(ok(mid)){
            ans = mid; 
            r = mid-1; 
        }
        else{
            l = mid+1; 
        }
    } 
    cout<<ans<<nl; 
} 