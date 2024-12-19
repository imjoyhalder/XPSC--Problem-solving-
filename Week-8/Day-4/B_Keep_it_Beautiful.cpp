#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n; cin>>n;
      vector<int> a(n),taken;
      string ans="";
      bool broken=false;
      for(int i=0;i<n;i++){
         cin>>a[i];
         if(taken.empty()){
            ans.push_back('1');
            taken.push_back(a[i]);
         }
         else{
            if(broken){
               if(a[i]<taken.back()){
                  ans.push_back('0');
               }
               else{
                  if(a[i]>taken[0]){
                     ans.push_back('0');
                  }
                  else{
                     ans.push_back('1');
                     taken.push_back(a[i]);
                  }
               }
            }
            else{
           
               if(a[i]>=taken.back()){
                  ans.push_back('1');
                  taken.push_back(a[i]);
               }
               else{
                  if(a[i]>taken[0]){
                     ans.push_back('0');
                  }
                  else{
                     broken=true;
                     ans.push_back('1');
                     taken.push_back(a[i]);
                  }
               }
            }
         }
      }

      cout<<ans<<endl;
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

