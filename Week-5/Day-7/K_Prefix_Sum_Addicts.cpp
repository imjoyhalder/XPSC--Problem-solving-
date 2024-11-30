#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"Yes"<<nl; 
#define no cout<<"No"<<nl; 
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        int n,k; cin>>n>>k; 

    vector<ll> s(n+1,0); 
    for(int i=n-k+1; i<=n; i++){
        cin>>s[i]; 
    }
    vector<ll> a(n+1); 

    if(n==1 or k==1){
        yes nl; 
        continue;
    }

    for(int i=n; i>=n-k+2; i--){
        a[i] = (s[i]-s[i-1]); 
    }
    bool possible = true; 

    for(int i=n-k+2; i<=n; i++){
        if(i+1<=n and a[i+1]<a[i]){
            possible = false; 
            break;
        }
    }

    if(!possible){
        no nl; 
        continue;
    }

    for(int i=n-k+1; i>1; i--){
        a[i] = a[i+1]; 
        s[i-1] = s[i]-a[i]; 
    }
    a[1] = s[1]; 

    for(int i=1; i<=n; i++){
        if(i+1<=n and a[i+1]<a[i]){
            possible = false; 
            break;
        }
    }
    if(possible){
        yes nl; 
    }
    else{
        no nl; 
    }
    }
       
    return 0;
} 