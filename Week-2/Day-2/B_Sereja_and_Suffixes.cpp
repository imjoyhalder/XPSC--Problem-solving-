#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,q; cin>>n>>q; 
    int arr[n+1]; 
    for(int i=1; i<=n; i++){
        cin>>arr[i]; 
    }
    set<int> st; 
    vector<int> cnt(n+1);
    for(int i=n; i>0; i--){
        st.insert(arr[i]); 
        cnt[i] = st.size(); 
    }
    while(q--){
        int pos; cin>>pos; 
        cout<<cnt[pos]<<'\n';
    }
    return 0;
} 