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
    map<int,int> frq; 

    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        frq[arr[i]]++; 
    }

    int mx_frq = 0; 
    for(auto it: frq){
        mx_frq = max(mx_frq,it.second); 
    }

    int ans = 0; 
    while(mx_frq<n){
        int rem = n-mx_frq; 
        int can_add = mx_frq; 

        ans++; 
        ans += min(rem,can_add); 
        mx_frq += min(rem,can_add);  
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