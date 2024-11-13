#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
       int n = arr.size(); 
       int l=0,r=0; 
       vector<int> v; 
       queue<int> q; 
       while(r<n){
           if(arr[r]<0){
               q.push(arr[r]); 
           }
           if(r-l+1==k){
               if(!q.empty()){
                   v.push_back(q.front()); 
                   if(arr[l]==q.front()){
                       q.pop(); 
                   }
               }
               else{
                   v.push_back(0); 
               }
               l++,r++; 
           }
           else{
               r++; 
           }
       }
       return v; 
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
        for(int val: sl.FirstNegativeInteger(arr,k)){
            cout<<val<<' '; 
        } 
    }
    return 0;
} 