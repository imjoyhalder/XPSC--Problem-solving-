#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n; cin>>n; 
    vector<ll> arr(n); 

    for(ll &x: arr) cin>>x; 
    ll sum = 0; 
    ll mx = INT_MIN; 
    int cnt = 0; 
    for(int i=0; i<n; i++){
        sum += arr[i]; 
        mx = max(arr[i],mx);
        if(sum-mx==mx){
            cnt++; 
        } 
    }
    cout<<cnt<<nl; 
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