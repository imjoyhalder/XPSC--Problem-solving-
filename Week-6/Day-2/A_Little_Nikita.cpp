#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n,m; cin>>n>>m; 
    if(n>=m){
        int dif = n-m; 
        if(dif%2==0){
            cout<<"Yes"<<nl; 
        }
        else{
            cout<<"No"<<nl; 
        }
    }
    else{
        cout<<"No"<<endl; 
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