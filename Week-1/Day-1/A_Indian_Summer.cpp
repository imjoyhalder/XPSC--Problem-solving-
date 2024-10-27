#include<bits/stdc++.h>
#define ll long long
#define fast() ios::sync_with_stdio(false);cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main(){
    int n; cin>>n; 
    cin.ignore(); 
    int ans = 0;
    map<string,int> mp; 
    string str; 
    while(n--){
        getline(cin,str);  
        if(str.size()!=0){
            mp[str]++; 
        }
    }
    for(auto it: mp){
        if(it.second>=1){
            ans++; 
        }
    } 
    cout<<ans<<endl; 
    return 0;
} 