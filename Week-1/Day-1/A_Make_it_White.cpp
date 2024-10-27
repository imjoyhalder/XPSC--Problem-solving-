#include<bits/stdc++.h>
#define ll long long
#define fast() ios::sync_with_stdio(false);cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main(){
    int test;
    cin>>test; 

    while(test--){
        int n; cin>>n; 
        string str; cin>>str; 
        if(n==1) cout<<1<<endl;
        else{
            int starting_idx,ending_idx;
            for(int i=0; i<n; i++){
                if(str[i]=='B'){
                    starting_idx=i; 
                    break;
                }
            } 
            for(int i=n-1; i>=0; i--){
                if(str[i]=='B'){
                    ending_idx =i; 
                    break;
                }
            } 
            cout<<(ending_idx-starting_idx)+1<<endl; 
        }
    }
    return 0;
}