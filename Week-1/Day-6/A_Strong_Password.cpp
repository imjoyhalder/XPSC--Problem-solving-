#include<bits/stdc++.h>
using namespace std;

int calculate_time(string str){
    int time = 2; 
    for(int i=1; i<str.size(); i++){
        if(str[i]==str[i-1]){
            time ++;  
        }
        else{
            time +=2; 
        }
    }
    return time; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
        string str; cin>>str; 
         
        int mx = 0; 
        string bestPassword; 
        for(char ch = 'a'; ch<='z'; ch++){
            for(int i=0; i<=str.size(); i++){
                string temp = str; 
                temp.insert(temp.begin()+i,ch); 
                int currentTime = calculate_time(temp); 
                if(currentTime>mx){
                    mx = currentTime; 
                    bestPassword = temp; 
                }
                
            }
        }
        cout<<bestPassword<<endl; 
    }
      
    return 0;
} 