#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    ll n,k; 
    cin>>n>>k; 

    vector<int> arr(n); 
    for(int &x: arr) cin>>x; 

    ll ans = 0; 

    ll l = 0,r = 0; 
    ll sum = 0 ; 

    while(r<n){
        sum += arr[r]; 
        if(sum<=k){
            ans = max(ans,r-l+1);
        }
        else{
            sum -=arr[l]; 
            l++; 
        }
        r++; 
    }
    cout<<ans<<endl; 
    return 0;
} 