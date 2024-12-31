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
       
    int n,q; cin>>n>>q; 

    vector<int> arr(n); 
    for(int &x: arr) cin>>x; 
    while(q--){
        int key, l =0, r = n-1, ans = 0, mid; 
        cin>>key; 
        while(l<=r){
            mid = l+(r-l)/2;  //(l+r)/2; 
            if(key<=arr[mid]){
                ans = mid; 
                r = mid-1; 
            }
            else{
                l = mid+1; 
            }
        } 
        if(key>arr[n-1]){
            cout<<(n+1)<<nl; 
        }
        else{
            cout<<ans+1<<nl; 
        }
        
    } 
    return 0;
} 