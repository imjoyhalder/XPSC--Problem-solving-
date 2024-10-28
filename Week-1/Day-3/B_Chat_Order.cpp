#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    map<string,int> mp; 
    stack<string> st; 
    while(t--){
        string str; cin>>str; 
        st.push(str); 
    }
    
    while(!st.empty()){
        if(mp.count(st.top())==0){
            cout<<st.top()<<endl; 
            mp[st.top()]++; 
        }
        st.pop(); 
    }
    return 0;
} 