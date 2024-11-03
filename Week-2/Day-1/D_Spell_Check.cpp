#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string target = "Timur";
    sort(target.begin(), target.end());  // Sorted target string

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());
        if (s == target) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
