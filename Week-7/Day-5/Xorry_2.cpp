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
    int a = 1; 
    int b= 0; 
    int cnt = 0; 
    while(a*2<=n){
        a = a*2; 
        cnt++; 
    }

    int ans = 1; 
    bool check = false; 
    for(int i=cnt-1; i>=0; i--){
        if(n&1<<i){
            a = b | (1<<i); 
            check = true; 
        }
        else{
            if(check) ans = ans*2; 
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