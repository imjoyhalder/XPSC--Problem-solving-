#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

const int MOD = 1000000007;

vector<long long> precomputeFactorials(int maxN) {
    vector<long long> factorial(maxN + 1, 1);
    for (int i = 2; i <= maxN; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    return factorial;
}

int main() {
    int T; 
    cin >> T;

    int maxN = 1000;
    vector<long long> factorial = precomputeFactorials(maxN);

    while (T--) {
        int n;
        cin >> n;

        cout << factorial[n] << endl;
    }

    return 0;
}
