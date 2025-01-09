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
       
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &x: arr) cin>>x; 
        sort(all(arr));

        auto ok = [&](int time){
            int cnt = 1, l = 0; 
            for(int r = 0; r<n; r++){
                if((arr[r]-arr[l])>2*time){
                    l = r; 
                    cnt++; 
                }
            }
            return cnt<=3; 
        }; 

        ll l = 0, r = 1e9, ans = 0, mid; 
        while(l<=r){
            mid = l+(r-l)/2; 
            if(ok(mid)){
                ans = mid; 
                r = mid-1; 
            }
            else{
                l = mid+1; 
            }
        }
        cout<<ans<<nl; 
    }
       
    return 0;
} 