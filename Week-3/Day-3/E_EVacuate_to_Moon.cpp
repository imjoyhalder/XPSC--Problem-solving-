#include<bits/stdc++.h>
using namespace std;

void solve(){
    int car,outlate,hour; 
    cin>>car>>outlate>>hour; 

    vector<int> all_car(car),all_outl(outlate); 
    for(int i=0; i<car; i++){
        cin>>all_car[i]; 
    }

    for(int i=0; i<outlate; i++){
        cin>>all_outl[i]; 
    }
    long long total_watt = 0; 

    sort(all_car.begin(),all_car.end(),greater<int>()); 
    sort(all_outl.begin(),all_outl.end(),greater<int>()); 

    for(int i=0; i<min(car,outlate); i++){
        total_watt += min(1LL*all_car[i],1LL*hour*all_outl[i]); 
    }
    cout<<total_watt<<endl; 
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