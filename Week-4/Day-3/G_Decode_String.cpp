#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 
    string t; 
    cin>>t; 

    string result;
    int i = n - 1;

    while (i >= 0) {
        if (t[i] == '0') {
            if (i >= 2) { 
                string num = t.substr(i - 2, 2);
                int letterIndex = stoi(num);
                result.push_back('a' + letterIndex - 1);
                i -= 3;
            } else {
                return;
            }
        } else {
            int letterIndex = t[i] - '0';
            result.push_back('a' + letterIndex - 1);
            i--;
        }
    }

    reverse(result.begin(), result.end());
    cout << result << endl;
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
