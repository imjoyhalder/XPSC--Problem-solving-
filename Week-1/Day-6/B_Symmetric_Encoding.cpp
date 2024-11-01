#include<bits/stdc++.h>
using namespace std;

string distinct_char(string str){
    unordered_set<char> s; 
    string new_str = ""; 
    for(char c: str){
        if(s.find(c)==s.end()){
            new_str.push_back(c); 
            s.insert(c); 
        }
    }
    sort(new_str.begin(),new_str.end()); 
    return new_str; 
}

char find(char c,string str,int n){
    auto pos = str.find(c); 
    return str[str.size() - 1 - pos];
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
        int n;  cin>>n; 
        string str; cin>>str; 

        string new_str = distinct_char(str); 
        int m = str.size()-1; 

        for(int i=0; i<n; i++){
            str[i] = find(str[i],new_str,m); 
        }
        cout<<str<<endl; 
    }
    return 0;
} 