#include<bits/stdc++.h>
#define ll long long
#define fast() ios::sync_with_stdio(false);cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main(){
    int a,b; 
    cin>>a>>b; 
    int total_conis = 0; 
    for(int i=0; i<2; i++){
        if(a>b){
            total_conis+=a; 
            a -=1; 
        }
        else{
            total_conis+=b; 
            b-=1; 
        }
    }
    cout<<total_conis<<endl; 
    return 0;
} 