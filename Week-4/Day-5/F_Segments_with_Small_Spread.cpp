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

    ll l = 0,r = 0; 
    ll ans = 0; 

    multiset<ll> ml; 

    while(r<n){
        ml.insert(arr[r]); 
        ll mx = *ml.rbegin(); 
        ll mn = *ml.begin(); 
        if(mx-mn <= k){
            ans += (r-l+1); 
        }
        else{
            while(l<=r){
                mx = *ml.rbegin(); 
                mn = *ml.begin(); 
                if(mx-mn<=k) break;
                else{
                    ml.erase(ml.find(arr[l])); 
                    l++; 
                }
            }
            mx = *ml.rbegin(); 
            mn = *ml.begin(); 
            if(mx-mn <= k){
                ans += (r-l+1); 
            }
        }
        r++; 
    }
    cout<<ans<<endl; 
      
    return 0;
} 