#include<bits/stdc++.h>
#define ll long long
#define fast() ios::sync_with_stdio(false);cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main(){
    int n; cin>>n; 
    vector<int> v(n); 

    for(int i=0; i<n; i++){
        cin>>v[i]; 
    }

    int i=0,j=n-1; 
    int sereja = 0, dima = 0; 

    int cnt = 0; 
    while(i<=j){
        
        if(cnt%2==0){
            if(v[i]>v[j]){
                sereja += v[i]; 
                i++; 
            }
            else{
                sereja+= v[j]; 
                j--; 
            }
        }
        else{
            if(v[i]>v[j]){
                dima += v[i]; 
                i++; 
            }
            else{
                dima+= v[j]; 
                j--; 
            }
        }
        cnt++; 
    }
    cout<<sereja<<' '<<dima<<endl; 
    return 0;
} 