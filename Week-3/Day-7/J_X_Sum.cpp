#include<bits/stdc++.h>
using namespace std;

int n,m;
bool isValid(int i,int j){
    return i<n && j<m && i>-1 && j>-1; 
}

void solve(){
    cin>>n>>m; 
    int matrix[n][m]; 

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    int cur=0,total = 0; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cur+=matrix[i][j]; 

            int p = i+1,q = j+1; 
            while(isValid(p,q)) cur+=matrix[p++][q++]; 

            p = i+1; 
            q = j-1; 
            while(isValid(p,q)) cur+=matrix[p++][q--]; 

            p = i-1; 
            q = j-1; 
            while(isValid(p,q)) cur+=matrix[p--][q--]; 

            p = i-1; 
            q = j+1; 
            while(isValid(p,q)) cur+=matrix[p--][q++]; 

            if(total<cur){
                total = cur; 
            }
            cur = 0; 
        }
    }
    cout<<total<<endl; 

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