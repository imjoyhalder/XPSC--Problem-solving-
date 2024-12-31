#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

const int MOD = 1000000007;

long long modularExponentiation(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod; 
    while (exp > 0) {
       
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp / 2;
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    int n; 
    cin >> n;

    while (n--) {
        long long a, b;
        cin >> a >> b;
        cout << modularExponentiation(a, b, MOD) << endl;
    }

    return 0;
}
