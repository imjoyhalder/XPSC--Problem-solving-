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
    string s; 
    cin>>s; 

    int one_count = 0, zero_count= 0; 
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            one_count++; 
        }
        else{
            zero_count++; 
        }
    }
    int min_paris = min(one_count,zero_count); 
    if(min_paris%2==0){
        cout<<"Ramos"<<endl; 
    }
    else{
        cout<<"Zlatan"<<nl; 
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