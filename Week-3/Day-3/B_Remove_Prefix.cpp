#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    int unique = 0; 
    map<int,int> mp; 
    vector<int> v(n); 
    for(int i=0; i<n; i++){
        cin>>v[i]; 
        mp[v[i]]++; 
    }

    int i=0; 
    int rem = n;
    int ans = 0; 

    while(mp.size()!=rem){
        ans++; 
        mp[v[i]]--; 
        if(mp[v[i]]==0) mp.erase(v[i]); 
        i++; 
        rem--; 
    }
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