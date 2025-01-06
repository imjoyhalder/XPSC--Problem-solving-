#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        int n,k; cin>>n>>k; 
        vector<int> a(n); 
        for(int &x: a) cin>>x; 

        if(is_sorted(a.begin(),a.end())){
            cout<<0<<endl;
            continue;
        }
 
        int ordered=0;
        for(int i=0;i<n;i++){
            if(a[i]==ordered+1){
                ordered++;
            }
        }
        int bug=n-ordered;
        int ans=(bug+k-1)/k;
        cout<<ans<<endl; 
    }
       
    return 0;
} 