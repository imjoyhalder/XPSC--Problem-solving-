#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n,q; cin>>n>>q; 
    vector<int> arr(n+1),prefix(n+1); 

    for(int i=1; i<=n; i++){
        cin>>arr[i]; 
    }
    sort(arr.rbegin(),arr.rend()); 
    // for(int val: arr) cout<<val<<' '; 
    // cout<<nl; 
    for(int i=1; i<=n; i++){
        prefix[i] = prefix[i-1]+arr[i-1];
    } 
    // for(int val: prefix) cout<<val<<" "; 
    // cout<<nl; 

    while(q--){
        int k, ans = -1; 
        cin>>k; 

        auto it = lower_bound(prefix.begin(),prefix.end(),k); 
        if(it==prefix.end()){
            cout<<ans<<nl; 
        }
        else{
            ans = it-prefix.begin(); 
            cout<<ans<<nl; 
        }
        
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