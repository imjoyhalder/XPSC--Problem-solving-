#include<bits/stdc++.h>
#define ll long long 
using namespace std;

class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        
        map<long long,int>mp;
        long long sum=0;
        int len=0;
        int i = 0; 
        while(i<arr.size()){
            sum+=arr[i];
            if(sum==k)
            {
                len=max(len,i+1);
            }
            long long ans=sum-k;
            if(mp.find(ans)!=mp.end())
            {
                int a=i-mp[ans];
                len=max(len,a);
            }
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
            i++;
        }
        return len; 
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
      
    return 0;
} 