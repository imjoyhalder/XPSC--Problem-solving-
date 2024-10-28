#include<bits/stdc++.h>
using namespace std;

int main(){
    string str; 
    cin>>str; 
    int freq[26] = {0}; 
    
    for(int i=0; i<str.size(); i++){
        freq[str[i]-97]++; 
    }

    for(int i=0; i<26; i++){
        if(freq[i]==0){
            char c = i+97; 
            cout<<c<<endl; 
            return 0; 
        } 
    }
    cout<<"None"<<endl; 
    return 0;
}