#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve(){
    int n; cin>>n; 
    vector<ll> arr(n); 

    for(int i=0; i<n; i++){
        cin>>arr[i]; 
    } 

    ll sum = 0; 
    ll op = 0; 
    int cons = 0; 
    bool negSeg = false; 

    for(int i=0; i<=n; i++){
        if(i<n){
            sum += abs(arr[i]); 
        }
        if(negSeg){
            if(i==n || arr[i]>0){
                op++; 
                negSeg = false; 
            }
        }
        else{
            if(arr[i]<0){
                negSeg = true; 
            }
        }
    }
    cout<<sum<<' '<<op<<endl; 


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    
    while(t--){
        solve(); 
    }
      
    return 0;
} 