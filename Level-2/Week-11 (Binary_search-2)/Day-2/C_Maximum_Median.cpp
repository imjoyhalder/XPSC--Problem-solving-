#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;  
    
    vector<int> v(n);
    for (auto &x : v)  
        cin >> x;
    
    sort(v.begin(), v.end());  
    
    int med = n / 2;
    long long ans = v[med];  
    
    long long low = 0, high = 1e18 + 90; 
    
    while (low <= high) {
        long long mid = low + (high - low) / 2; 
        long long sum = 0;
        
        for (int i = med; i < n; i++) {
            if (v[i] <= mid)
                sum += (mid - v[i]);
            if (sum > k)  
                break;
        }
        
        if (sum <= k) {  
            ans = max(ans, mid);
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;  
    return 0; 
}
