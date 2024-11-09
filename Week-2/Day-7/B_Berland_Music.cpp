#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    vector<int> v(n); 
    
    for(int i=0; i<n; i++){
        cin>>v[i]; 
    }

    string s; cin>>s; 
    map<int,int> like,dislike; 

    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            dislike[v[i]] = i; 
        }
        else{
            like[v[i]] = i; 
        }
    }

    int nums = 1; 

    for(auto it: dislike){
        v[it.second] = nums++; 
    }
    
    for(auto it: like){
        v[it.second] = nums++; 
    }

    

    for(int val: v) {
        cout<<val<<' '; 
    }
    cout<<endl; 
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