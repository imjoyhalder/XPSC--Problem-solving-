#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b,n; 
    cin>>a>>b>>n; 
    vector<ll> arr(n); 

    ll sum = 0; 
    if(b>=a){
        sum = a; 
        b = a; 
    }
    else sum = b; 

    for(ll i=0; i<n; i++){
        cin>>arr[i]; 
        if(arr[i]+1<=a){
            sum +=arr[i]; 
        }
        else{
            sum += a-1; 
        }
    }
    cout<<sum<<endl; 
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