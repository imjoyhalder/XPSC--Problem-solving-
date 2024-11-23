#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin>>n; 
    vector<ll> arr(n),prf_arr(n); 

    for(ll &x: arr) cin>>x; 
    
    string str; cin>>str; 

    prf_arr[0] = arr[0]; 

    for(ll i=1; i<n; i++){
        prf_arr[i] = prf_arr[i-1]+arr[i]; 
    }

    ll ans = 0; 
    ll l = 0, r = n-1; 

    while(l<=r){
        if(str[l]=='R'){
            l++; 
        }
        else{
            if(str[r]=='L'){
                r--; 
            }
            else{
                ans+= prf_arr[r]; 

                if(l>0){
                    ans -= prf_arr[l-1]; 
                }
                l++; 
                r--; 
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