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
    vector<int> arr(n); 
    
    int x = 0; 

    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        x^=arr[i]; 
    }
    int ans = x; 
    
    for(int i=0; i<n; i++){
        ans = min(ans,x^arr[i]); 
    }
    cout<<ans<<nl; 
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