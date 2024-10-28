#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    ll n; cin>>n; 
    vector<ll> arr(n);
    ll mn = INT_MAX; 
    ll sum = 0;  
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        sum +=arr[i]; 
        if(arr[i]%2!=0){
            mn = min(arr[i],mn); 
        }
    }
    if(sum%2==0) cout<<sum<<endl; 
    else cout<<sum-mn<<endl; 
    return 0;
} 