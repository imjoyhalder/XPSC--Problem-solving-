#include<bits/stdc++.h>
#define ll long long
#define fast() ios::sync_with_stdio(false);cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main(){
    int A,B,T; 
    cin>>A>>B>>T; 
    int total_biscuit = 0; 
    
    while((T>=A)){
        T-=A; 
        total_biscuit += B; 
    }

    cout<<total_biscuit<<endl; 
    return 0;
} 