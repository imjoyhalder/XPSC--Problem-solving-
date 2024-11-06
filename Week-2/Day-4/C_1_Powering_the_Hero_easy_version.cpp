#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        priority_queue<ll> pq; 

        ll total_amry_pow = 0; 
        for(int i=0; i<n; i++){
            ll val; cin>>val; 
            if(val==0 && !pq.empty()){
                total_amry_pow+= pq.top(); 
                pq.pop(); 
            }
            else{
                pq.push(val); 
            }
        }
        cout<<total_amry_pow<<endl; 
    }
      
    return 0;
} 