#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; 
    cin >> t; 
    for(int i = 0; i < t; i++){
        ll n, q; 
        cin >> n >> q; 
        
        map<ll, vector<ll>> pos; 
        for(int i = 1; i <= n; i++){
            ll val; 
            cin >> val; 
            pos[val].push_back(i); 
        }
       
        while(q--){
            ll a, b; 
            cin >> a >> b; 
            
           
            if(!pos.count(a) || !pos.count(b)){
                cout << "NO" << endl; 
                continue; 
            }
            ll x = pos[a][0]; 
            if(upper_bound(pos[b].begin(), pos[b].end(), x) == pos[b].end()){
                cout << "NO" << endl; 
            }
            else{
                cout << "YES" << endl; 
            }
        }
    }
      
    return 0;
}
