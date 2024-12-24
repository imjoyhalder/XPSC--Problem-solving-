#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> divisors;

 
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i); 
            }
        }
    }

   
    sort(divisors.begin(), divisors.end());

    if (k > divisors.size()) {
        cout << -1 << nl; 
    } else {
        cout << divisors[k - 1] << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
