#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size(); 
        long long ans = 0, sum = 0; 
        int l = 0,r = 0; 
        while(r<n){
            sum += arr[r]; 
            if(r-l+1==k){
                ans = max(ans,sum); 
                sum -= arr[l]; 
                l++; 
            }
            r++; 
        }
        return ans; 
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t; 
    while (t--){
        int n,k; cin>>n>>k; 
        vector<int> arr(n); 

        for(int i=0; i<n; i++){
            cin>>arr[i]; 
        }

        Solution sl; 
        cout<<sl.maximumSumSubarray(arr,k)<<endl; 
    }
    return 0;
} 