#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    ll n,k; 
    cin>>n>>k; 

    vector<ll> arr(n); 
    for(ll &x: arr) cin>>x; 

    ll ans = 0; 
    ll sum = 0; 
    ll l=0,r=0; 

    while(r<n){
        sum+=arr[r]; 
        if(sum<=k){
            ans += (r-l+1); 
        }
        else{
            while(sum>k){
                sum -= arr[l]; 
                l++; 
            }
            if(sum<=k){
            ans += (r-l+1); 
        }
        }
        r++; 

    }
    cout<<ans<<endl; 

    return 0;
} 