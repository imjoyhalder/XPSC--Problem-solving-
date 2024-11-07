#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        priority_queue<int>pq; 
        ll mx_power_of_army = 0; 

        for(int i=0; i<n; i++){
            int x; cin>>x; 
            if(x==0 && !pq.empty()){
                mx_power_of_army+=pq.top(); 
                pq.pop(); 
            }
            else{
                pq.push(x); 
            }
        }
        cout<<mx_power_of_army<<endl; 
    }
    return 0;
} 