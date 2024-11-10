#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int n,m; 
    cin>>n>>m; 
    vector<int> arr1(n),arr2(m); 

    for(int i=0; i<n; i++){
        cin>>arr1[i]; 
    }
    for(int i=0; i<m; i++){
       cin>>arr2[i]; 
    }
    
    ll cnt = 0; 
    int l=0,r=0; 
    while(r<m){
        if(l<n && arr1[l]<arr2[r]){
            l++,cnt++; 
        }
        else{
            cout<<cnt<<' '; 
            r++; 
            
        }
    }
    return 0;
} 