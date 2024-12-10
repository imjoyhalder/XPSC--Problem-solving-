#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
    string s,t; 
    cin>>s>>t; 

    if(s==t || s[0]=='1'){
        yes nl; 
        continue;
    }
    int pos = -1; 
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            pos = i; 
            break;
        }
    }

    if(pos!=-1){
        bool ok = true; 
        for(int i=0; i<n; i++){
            if(s[i]!=t[i]){
                if(pos>i){
                    ok  = false; 
                    break;
                }
            }
        }
        if(ok){
            yes nl;
        } 
        else{
            no nl; 
        }
    }else{
        no nl; 
    }
    }
       
    return 0;
} 