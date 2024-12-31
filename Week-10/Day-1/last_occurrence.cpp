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
       
    int n; cin>>n; 
    vector<int> arr(n); 
    for(int &x: arr) cin>>x; 

    int key , l = 0, r = n-1, ans = 0, mid; 
    cin>>key; 
    while(l<=r){
        mid = (l+r)/2; 
        if(arr[mid]==key){
            ans = mid; 
            l = mid + 1;  
        }
        else if(key>arr[mid]){
            l = mid+1; 
        }
        else{
            r = mid-1; 
        }
    }
    cout<<ans+1<<nl; 
    return 0;
} 