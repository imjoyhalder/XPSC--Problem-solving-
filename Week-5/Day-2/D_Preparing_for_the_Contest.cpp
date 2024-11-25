#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
using namespace std;

void solve(){
    int n,k; cin>>n>>k; 

    list<int> lst; 
    lst.push_back(1); 
    int cnt = 0; 

    for(int i=2; i<=n; i++){
        if(cnt<k){
            lst.push_back(i);
            cnt++;  
        }
        else{
            lst.push_front(i); 
        }
    }

    for(auto it: lst) cout<<it<<' '; 

    cout<<endl; 
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