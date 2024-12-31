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
        int key, l = 0, r = n-1, ans = -1, mid; 
        cin>>key; 
        while(l<=r){
            mid = (l+r)/2; 
            if(key>=arr[mid]){
                ans = mid; 
                l = mid+1; 
            }
            else{
                r = mid -1; 
            }
        }
        cout<<ans+1<<nl;  
    } 
    return 0;
} 