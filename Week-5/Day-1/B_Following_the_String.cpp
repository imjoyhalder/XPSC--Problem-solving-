#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
using namespace std;

void solve(){
    int n; cin>>n; 
    vector<int> arr(n); 
    for(int &x: arr) cin>>x; 
    
    vector<char> alpha = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    map<char,int> mp; 
    for(int i=0; i<n; i++){
        for(int j=0; j<26; j++){
            if(arr[i]==mp[alpha[j]]){
                cout<<alpha[j]; 
                mp[alpha[j]]++; 
                break;
            }
        }
    }
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