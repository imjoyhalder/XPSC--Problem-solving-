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

    multiset<int> towers;
    for (int i = 0; i < n; ++i) {
        int cube;
        cin >> cube;
        auto it = towers.upper_bound(cube);

        if (it != towers.end()) {
            towers.erase(it);
        }
        towers.insert(cube);
    }

    cout << towers.size() << endl;

    return 0;
}
