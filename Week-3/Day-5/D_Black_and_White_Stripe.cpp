#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k; 
    string str; cin>>str; 

    int mx = 0; 
    int l=0, r=0; 
    int cnt_b = 0; 
    while(r<n){
        
        if(str[r]=='B'){
            cnt_b++; 
        }
        if(r-l+1==k){
            mx = max(cnt_b,mx); 
            if(str[l]=='B'){
                cnt_b--; 
            }
            l++,r++; 
        }
        else{
            r++; 
        }

    }
    cout<<k-mx<<endl; 

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