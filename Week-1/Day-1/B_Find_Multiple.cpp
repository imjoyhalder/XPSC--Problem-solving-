#include<bits/stdc++.h>
#define ll long long
#define fast() ios::sync_with_stdio(false);cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main(){
    int A,B,C; 
    cin>>A>>B>>C; 
    for(int i=A; i<=B; i++){
        if(i%C==0){
            cout<<i<<endl; 
            return 0; 
        }
    }
    cout<<-1<<endl; 
    return 0;
} 