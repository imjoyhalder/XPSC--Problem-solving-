#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> divisor[n + 1];

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            divisor[j].push_back(i);
        }
    }


    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int val : divisor[i]) {
            cout << val << ' ';
        }
        cout << endl;
    }

    return 0;
}
