#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    string str; cin>>str; 

    int i=0,j=n-1; 
    int cnt = n; 
    while(i<j){
        if(str[i]==str[j]){
            break;
        }
        else{
            cnt-=2; 
        }
        i++,j--; 
    }
    cout<<cnt<<endl;   
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