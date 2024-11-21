#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; 
    ll s;
    cin >> n >> s; 

    vector<int> arr(n); 
    for(int &x: arr) cin >> x; 

    int l = 0;          
    ll sum = 0;         
    int ans = INT_MAX;  

    for(int r = 0; r < n; r++) {  
        sum += arr[r];           
        
        while(sum >= s) {        
            ans = min(ans, r - l + 1); 
            sum -= arr[l];       
            l++;                 
        }
    }

    if(ans == INT_MAX) cout << -1 << endl; 
    else cout << ans << endl;             
    
    return 0;
}
