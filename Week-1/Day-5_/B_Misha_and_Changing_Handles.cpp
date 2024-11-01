#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int n; cin>>n; 
    map<string,string>ans,has; 
    while(n--){
        string a,b; 
        cin>>a>>b; 
        if(has.find(a) != has.end()){
            string s = has[a]; 
            ans[s] = b; 
            has.erase(a);
            has[b] = s; 
        }
        else{
            ans[a] = b; 
            has[b] = a; 
        }
        
    }
    cout<<ans.size()<<endl; 
    for(auto it: ans){
        cout<<it.first<<' '<<it.second<<endl; 
    }
      
    return 0;
} 