#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
using namespace std;

void solve(){
    int n; cin>>n; 

    if(n%2) {
        cout<<"NO"<<nl;
        return; 
    } 

    ll v = n/2; 
    cout<<"YES"<<nl; 
    for(int i=0; i<v; i++){
        if(i%2){
            cout<<"AA";
        }
        else{
            cout<<"BB"; 
        }
    }
    cout<<nl; 
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