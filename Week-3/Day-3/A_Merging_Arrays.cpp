#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int n,m; cin>>n>>m; 
    priority_queue<int,vector<int>,greater<int>> pq; 

    for(int i=0; i<n; i++){
        int val; cin>>val; 
        pq.push(val);
    }

    for(int i=0; i<m; i++){
        int val; cin>>val; 
        pq.push(val); 
    } 

    while(!pq.empty()){
        cout<<pq.top()<<' '; 
        pq.pop(); 
    }
    return 0;
} 