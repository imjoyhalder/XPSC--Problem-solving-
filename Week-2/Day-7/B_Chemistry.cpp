#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; 
    cin>>n>>k; 
    string s; 
    cin>>s; 

    map<char,int> mp; 
    for(char c: s){
        mp[c]++; 
    }
    int count = 0; 
    for(auto it: mp){
        if(it.second%2 !=0){
            count++; 
        }
    }
    if(count-1<0){
        count = 0; 
    }
    else{
        count = count-1; 
    }

    if(k>=count && k<=n){
        cout<<"YES\n"; 
    }
    else{
        cout<<"NO\n"; 
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int q; cin>>q; 
    while(q--){
        solve(); 
    }
      
    return 0;
} 