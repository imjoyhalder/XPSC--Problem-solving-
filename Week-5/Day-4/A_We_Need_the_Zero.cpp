#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n;   cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
       cin>>a[i];
    }

    int x=0;
    for(int i=0;i<n;i++){
       x^=a[i];
    }
    for(int i=0;i<n;i++){
       a[i]^=x;
    }
    int y=0;
    for(int i=0;i<n;i++){
       y^=a[i];
    }
    if(y==0){
       cout<<x<<endl;
    }
    else{
       cout<<-1<<endl;
    }
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