#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long a, b, n, s;
    cin >> a >> b >> n >> s;

    long long max_n_con = min(a, s / n) * n;

    long long remaining = s - max_n_con;

    if (remaining <= b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
