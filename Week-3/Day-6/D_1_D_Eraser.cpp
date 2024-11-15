#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k; 
    string str; 
    cin>>str; 

    int i=0; 
    int operation=0; 

    while(i<n){
        if(str[i]=='B'){
            operation++; 
            i +=k; 
        }
        else{
            i++; 
        }
    }
    cout<<operation<<endl; 
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