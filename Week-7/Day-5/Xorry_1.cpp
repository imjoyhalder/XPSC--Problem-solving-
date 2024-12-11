#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

pair<int,int> findXorryPair(int X){
    int A= 0, B = 0; 
    int bitposition = 0; 
    
    while((1<<bitposition)<=X){
        bitposition++; 
    }

    int MSB = 1<<(bitposition-1); 
    A = MSB; 
    B = A^X; 
    
    return {B,A}; 

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        int x; cin>>x; 
        pair<int,int> result = findXorryPair(x); 
        cout<<result.first<<' '<<result.second<<endl; 
    }
       
    return 0;
} 