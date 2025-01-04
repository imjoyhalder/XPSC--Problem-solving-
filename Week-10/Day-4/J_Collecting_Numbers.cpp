#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> position(n + 1); 
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        position[x] = i; 
    }

    int rounds = 1; 
    for (int i = 2; i <= n; ++i) {
        if (position[i] < position[i - 1]) {
            rounds++; 
        }
    }

    cout << rounds << endl; 
    return 0;
}
