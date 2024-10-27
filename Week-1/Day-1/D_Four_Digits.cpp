#include<bits/stdc++.h>
#define ll long long
#define fast() ios::sync_with_stdio(false);cin.tie(NULL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main(){
    int n; cin>>n; 
    string str = to_string(n); 
    string str1 = "0",str2="00",str3="000";
    if(str.size()==1){
        str3+=str; 
        cout<<str3<<endl; return 0; 
    } 
    else if(str.size()==2){
        str2+=str; 
        cout<<str2<<endl; 
    }
    else if(str.size()==3){
        str1+=str; 
        cout<<str1<<endl; 
    }
    else{
        cout<<str<<endl; 
    }
    return 0;
} 