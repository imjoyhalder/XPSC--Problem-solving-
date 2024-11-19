#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
    string str; 
    cin>>str; 

    int count_0_segment = 0, count_1_segment = 0; 
    int i=0; 
    vector<int> result; 
    while(i<n){
        if(str[i]=='0'){
            count_0_segment++; 
            while(i<n && str[i]=='0'){
                i++; 
            }
        }
        else{
            count_1_segment++; 
            while(i<n && str[i]=='1'){
                i++; 
            }
        }
    }
    cout<<min(count_0_segment,count_1_segment)<<endl; 
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