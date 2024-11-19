#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c; 
    cin>>a>>b>>c;

    int d = a-1; 
    int e = abs(c-b); 
    int f = abs(c-1); 

    if(d==(e+f)){
        cout<<3<<endl; 
    }
    else if(d<(e+f)){
        cout<<1<<endl; 
    }
    else{
        cout<<2<<endl; 
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