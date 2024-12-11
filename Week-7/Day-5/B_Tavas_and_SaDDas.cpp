#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int main() {
    string n;
    cin >> n;
    
    int length = n.size();
    int index = 0;
    
    for (int i = 1; i < length; ++i) {
        index += (1 << i); 
    }
    
  
    for (int i = 0; i < length; ++i) {
        if (n[i] == '7') {
            index += (1 << (length - i - 1));
        }
    }
    
    cout << index + 1 << endl;
    
    return 0;
}
