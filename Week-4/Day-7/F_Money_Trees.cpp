#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,k; 
    cin>>n>>k; 
    vector<int> arr(n),hight(n);

    for(int &x: arr) cin>>x; 
    for(int &x: hight) cin>>x; 

    ll i = 0, j = 1; 
    ll sum = 0; 
    ll ans = 0; 
    ll cur = arr[0]; 

    if(cur<=k) ans = 1; 

    while(j<n){
        if(hight[j-1] % hight[j]==0){
            cur += arr[j]; 
        }
        else{
            cur = arr[j]; 
            i = j; 
        }

        while(cur>k){
            cur -= arr[i++]; 
        }
        ans = max(ans, j-i+1); 
        j++; 
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