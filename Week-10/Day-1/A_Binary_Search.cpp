#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll &x : arr) cin >> x;

    while (q--) {
        ll l = 0, r = n - 1, mid, key;
        cin >> key;
        bool found = false; 

        while (l <= r) {
            mid = (l + r) / 2;
            if (key == arr[mid]) {
                yes; 
                found = true;
                break; 
            } else if (key > arr[mid]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (!found) no; 
    }

    return 0;
}
