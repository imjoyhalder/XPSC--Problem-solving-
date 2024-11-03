#include<bits/stdc++.h>
using namespace std;

bool isIqual(char a, char b){
    if(a==b) return true; 
    return ((a=='G'&& b=='B') || (a == 'B'&& b=='G')); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        string str1,str2; 
        cin>>str1>>str2; 

        bool flag = true; 
        for(int i=0; i<n; i++){
            if(!isIqual(str1[i],str2[i])){
                flag = false; 
                break;; 
            }
        }
        if(flag) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl; 
    }
      
    return 0;
} 