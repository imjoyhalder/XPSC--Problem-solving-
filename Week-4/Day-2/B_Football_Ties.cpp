#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y; 
    cin>>x>>y; 

    int last_x = x-(x/3)*3; 
    int last_y = y-(y/3)*3; 

    int draw = 0; 

    while(last_x != 0|| last_y !=0){
        last_x--,last_y--; 
        draw++; 
    }
    cout<<draw<<endl; 
    
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