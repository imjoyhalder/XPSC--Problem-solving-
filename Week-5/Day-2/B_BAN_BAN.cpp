#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(), v.end()
#define print(v) for (auto data : v) cout << data << ' ';
using namespace std;

void solve() {
    int n;
    cin >> n;

    string str="#";
    for (int i = 0; i < n; i++) {
        str = str + "BAN";
    }
    int sz = str.size()-1;

    vector<pair<int,int>> v; 
    int l = 2, r = sz; 

    while(l<r){
        v.push_back({l,r});
        swap(str[l],str[r]); 
        l += 3; 
        r -= 3; 
    } 
    cout<<v.size()<<nl; 

    for(auto it: v){
        cout<<it.first<<" "<<it.second<<nl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
