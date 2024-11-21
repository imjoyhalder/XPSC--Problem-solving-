#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int l = 0;       
    ll sum = 0;      
    ll cnt = 0;      

    for (int r = 0; r < n; r++) {  
        sum += arr[r];             

        while (sum >= s) {         
            cnt += (n - r);        
            sum -= arr[l];         
            l++;
        }
    }

    cout << cnt << endl;           

    return 0;
}
