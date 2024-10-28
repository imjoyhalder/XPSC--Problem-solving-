
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    map<string,int> count; 
    int n; 
    cin>>n; 
    while(n--){
        string word; 
        cin>>word; 
        if(count[word]==0){
            cout<<"OK"<<endl; 
        }
        else if(count[word]>0){
            cout<<word<<count[word]<<endl; 
        }
        count[word] ++; 
        
    }
    return 0;
} 
