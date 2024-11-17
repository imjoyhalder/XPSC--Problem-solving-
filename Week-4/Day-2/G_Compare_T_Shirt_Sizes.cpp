#include<bits/stdc++.h>
using namespace std;

int match(char a_last, char b_last){
    if(a_last=='S' && b_last=='M'){
        return 1; 
    }
}

void solve(){
    string a,b; 
    cin>>a>>b; 

    int flag; 
    char a_last = a.back(); 
    char b_last = b.back(); 

    if(a_last=='S' and b_last=='M') flag = -1; 
    if(a_last=='M' and b_last=='S') flag = 1; 
    if(a_last=='L' and b_last=='M') flag = 1; 
    if(a_last=='M' and b_last=='L') flag = -1; 
    if(a_last=='S' and b_last=='L') flag = -1; 
    if(a_last=='L' and b_last=='S') flag = 1; 

    if(a_last==b_last){
        int a_sz = a.size(); 
        int b_sz = b.size(); 

        if(a_last=='S'){
            if(a_sz>b_sz){
                flag = -1; 
            }
            else if(a_sz<b_sz){
                flag =1; 
            }
            else{
                flag = 0; 
            }
        }
        else if(a_last=='L'){
            if(a_sz>b_sz){
                flag = 1; 
            }
            else if(a_sz<b_sz){
                flag = -1; 
            }
            else{
                flag = 0; 
            }
        }
        else{
            flag = 0; 
        }
    }

    if(flag==1){
        cout<<'>'<<endl; 
    }
    else if(flag ==-1){
        cout<<'<'<<endl; 
    }
    else{
        cout<<'='<<endl; 
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