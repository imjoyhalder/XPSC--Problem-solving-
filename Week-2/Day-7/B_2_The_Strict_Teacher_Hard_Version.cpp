#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,q; 
    cin>>n>>m>>q; 
    vector<int> teacher(m); 
    for(int i=0; i<m; i++){
        cin>>teacher[i]; 
    }
    sort(teacher.begin(),teacher.end()); 

    while(q--){
        int david; 
        cin>>david; 
        if(david<teacher[0]){
            cout<< teacher [0]-1<<'\n'; 
            continue;
        }

        if(david>teacher[m-1]){
            cout<<n-teacher[m-1]<<'\n'; 
            continue;
        }

        auto it = lower_bound(teacher.begin(),teacher.end(),david); 
        auto jt = it; 
        jt--; 

        int left = *jt, right = *it; 
        int mid = (left+right)/2; 

        cout<<min(abs(mid-left),abs(mid-right))<<'\n'; 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int q; cin>>q; 
    while(q--){
        solve(); 
    }
    return 0;
} 