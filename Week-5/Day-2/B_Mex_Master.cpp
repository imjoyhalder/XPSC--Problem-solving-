#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
using namespace std;

void solve(){
    int n; cin>>n; 
    int zero=0, nonZero = 0; 
    vector<int> arr(n); 

    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        if(arr[i]==0){
            zero++; 
        }
        else{
            nonZero++; 
        }
    }

    int ans; 
    if(zero==0){
        ans = 0; 
    }
    else{
        if(nonZero>=zero-1){
            ans = 0; 
        }
        else{
            int mx = *max_element(all(arr)); 
            if(mx==1){
                ans = 2; 
            }
            else{
                ans = 1; 
            }
        }
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