#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t;
    int k = t;  
    vector<string> v; 
    while(t--){
        string str; 
        cin>>str; 
        v.push_back(str); 
    }

    map<string,int> mp; 
    string ans; 
    for(int i=k-1; i>=0;i--){
        if(mp[v[i]]==0){
            int n = v[i].size(); 
            ans.push_back(v[i][n-2]); 
            ans.push_back(v[i][n-1]); 
            mp[v[i]]++; 
        }
    }

    cout<<ans<<endl; 
    return 0;
} 