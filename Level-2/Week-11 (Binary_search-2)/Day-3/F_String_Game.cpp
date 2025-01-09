#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    string t,p; cin>>t>>p; 
    int n = t.size(); 
    int m = p.size(); 
    vector<int> arr(n); 
    
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        arr[i]--; 
    }

    auto ok = [&](int del){
        vector<bool> bad(n); 
        for(int i=0; i<=del; i++){
            bad[arr[i]] = true; 
        }

        int j=0; 
        for(int i=0; i<n; i++){
            if(!bad[i] && t[i]==p[j]){
                j++; 
            }
            if(j==m){
                return true; 
            }
        }
        return false; 
    }; 

    int l = 0, r = n-1, ans =0, mid; 
    while(l<=r){
        mid = l+(r-l)/2; 
        if(ok(mid)){
            ans = mid; 
            l = mid+1; 
        }
        else{
            r = mid-1; 
        }
    }
    cout<<ans+1<<nl; 
    return 0;
} 