#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    ll n; cin>>n; 
    string str; 
    cin>>str; 

    ll total_mark = 0; 
    ll frq[4] = {0}; 

    for(auto c: str){
        if(c!='?'){
            frq[c-'A']++; 
        }
    }

    ll ans = 0; 
    for(ll i=0; i<4; i++){
        ans += min(n,frq[i]); 
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