#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n; 
    int arr[n+5][n-1];

    for(int i=1; i<=n; i++){
        for(int j=1; j<n; j++){
            cin>>arr[i][j]; 
        }
    }

    map<int,int> mp,m; 

    for(int i=1; i<=n; i++){
        mp[arr[i][n-1]] = i; 
        m[arr[i][n-1]]++; 
    }
    
    int index=0, val; 
    for(auto u: m){
        if(u.second==1){
            index = u.first; 
        }
        else{
            val = u.first; 
        }
    }

    for(int i=1; i<n; i++){
        cout<<arr[mp[index]][i]<<' '; 
    }
    cout<<val<<endl; 
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