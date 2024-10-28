#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
 
        stack<int> small, capital; 
        string str; cin>>str; 
        for(int i=0; i<str.size(); i++){
            if(str[i]!='B' && isupper(str[i])) capital.push(i); 
            if(str[i]!='b' && islower(str[i])) small.push(i); 
 
            if(str[i]=='B' && !capital.empty()){
                str[capital.top()] = '$'; 
                capital.pop(); 
            }
            else if(str[i]=='b' && !small.empty()){
                str[small.top()] = '$'; 
                small.pop(); 
            }
        }
        for(char c: str){
            if(c!='$' && c!='B' && c!='b'){
                cout<<c; 
            }
        }
        cout<<endl; 
    }
      
    return 0;
} 