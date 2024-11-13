#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    map<int,int> mp; 
    for(int i=0; i<n; i++){
        int val; cin>>val; 
        if(val!=0){
            mp[val]++; 
        }
        
    }

    if(mp.size()==1 || mp.size()==0){
        cout<<"YES"<<endl; 
    }
    else{
        cout<<"NO"<<endl; 
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