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
    vector<int>arr(n); 
    
    ll sum = 0, cnt_1=0; 
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        sum+=arr[i]; 
        if(arr[i]==1){
            cnt_1++; 
        }
    }
    if(sum>=cnt_1+n && n>1){
        yes nl; 
    }
    else{
        no nl; 
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