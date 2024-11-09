#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {   
    int q;
    cin >> q; 
    while (q--) {
        ll n;
        char x;
        string s;
        cin >> n >> x >> s;

        bool flag = false;
        int cnt = 0, res = 0;
        
        for (int i = 0; i < n * 2; i++) {
            if (s[i % n] == 'g') {
                if (flag) {
                    res = max(res, cnt);
                    flag = false;  
                }
            } else if (s[i % n] == x && !flag) {
                flag = true;   
                cnt = 0;
            }

            if (flag) {
                cnt++; 
            }
        }

        cout << res << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}
