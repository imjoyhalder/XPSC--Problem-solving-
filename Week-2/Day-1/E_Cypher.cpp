#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t;
    while(t--){
        int n;cin>>n; 
        vector<pair<int,string>>arr(n); 
        for(int i=0; i<n; i++){
            int val; cin>>val; 
            arr[i] = {val,""}; 
        }
        for(int i = 0; i<n; i++){
            int sz; cin>>sz; 
            string str; cin>>str; 
            arr[i].second = str; 
        }

        
        for(int i=0; i<n; i++){
            for(auto c: arr[i].second){
                if(c=='U'){
                    arr[i].first--; 
                    if(arr[i].first==-1){
                        arr[i].first = 9; 
                    }
                }
                else if(c=='D'){
                    arr[i].first++; 
                    if(arr[i].first==10){
                        arr[i].first=0; 
                    }
                }
            }
        }
        for(auto it: arr){
            cout<<it.first<<' '; 
        }
        cout<<endl; 
    }
      
    return 0;
} 