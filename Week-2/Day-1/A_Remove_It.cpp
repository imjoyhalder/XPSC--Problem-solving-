#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int n,target; cin>>n>>target; 
    vector<int>arr; 
    for(int i=0; i<n; i++){
        int val; cin>>val; 
        if(val!=target){
            arr.push_back(val); 
        }
    }
    for(int val: arr) cout<<val<<' '; 
    return 0;
} 