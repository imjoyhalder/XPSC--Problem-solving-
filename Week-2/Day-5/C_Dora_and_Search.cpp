#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        vector<int> arr(n+1); 
        for(int i=1; i<=n; i++){
            cin>>arr[i]; 
        }
        if(n<4) cout<<-1<<endl; 
        else{
            int left = 1,right = n; 
            int mn = 1; 
            int mx = n; 
            bool found = false; 
            while(left<right){
                if(arr[left]==mx){
                    left++; 
                    mx--; 
                }
                else if(arr[left]==mn){
                    left++; 
                    mn++; 
                }
                else if(arr[right]==mn){
                    right --; 
                    mn++; 
                }
                else if(arr[right]==mx){
                    right--; 
                    mx--; 
                }
                else{
                    cout<<left<<' '<<right<<endl; 
                    found = true; 
                    break;
                }
            }
            if(!found) cout<<-1<<endl; 
        }
        

        
    }
      
    return 0;
} 


