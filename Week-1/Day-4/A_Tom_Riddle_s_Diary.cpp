#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    map<string,int> mp; 
    int n;cin>>n; 
    while(n--){
        string str; cin>>str; 
        if(mp[str]==0){
            cout<<"NO"<<endl; 
        }
        else{
            cout<<"YES"<<endl; 
        }
        mp[str]++; 
    }
    return 0;
} 