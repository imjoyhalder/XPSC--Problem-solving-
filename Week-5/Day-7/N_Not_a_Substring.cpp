#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    string str; 
    cin>>str; 

    int n = str.size(); 
    if(str=="()"){
        no nl; 
        return; 
    }

    int i=0; 
    bool check = false; 
    while(i<n-1){
        if(str.substr(i,2)==")("){
            check=true; 
            break;
        }
        i++; 
    }

    string ans = ""; 
    if(check){
        for(int i=0; i<n; i++){
            ans +='('; 
        }
        for(int i=0; i<n; i++){
            ans +=')'; 
        }
        yes nl; 
        cout<<ans<<nl; 
    }
    else{
        for(int i=0; i<n; i++){
            ans+="()"; 
        }
        if(ans==str){
            no nl; 
        }
        else{
            yes nl; 
            cout<<ans<<nl; 
        }
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