#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int n;cin>>n; 
    vector<int> arr(n); 

    map<int,int> mp; 
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        mp[arr[i]]++; 
    }
    
    int cnt = 0; 
    for(auto it: mp){
        cnt = max(cnt,it.second); 
    }
    cout<<cnt<<endl; 
    return 0;
} 