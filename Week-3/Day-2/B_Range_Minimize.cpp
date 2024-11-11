#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n; cin>>n; 

    vector<ll> a(n); 
    for(int i=0; i<n; i++){
        cin>>a[i]; 
    }
    sort(a.begin(),a.end()); 
    vector<ll> b = a; 
    ll ans = INT_MAX; 

    b.pop_back(); 
    b.pop_back(); 

    ans = min(b.back()-b.front(),ans); 

    b = a; 

    ans = min(b.back()-b[2],ans); 

    ans = min(b[n-2]-b[1],ans); 

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