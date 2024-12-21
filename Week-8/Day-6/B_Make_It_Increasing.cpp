#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = n - 2; i >= 0; i--) {
            while (a[i] != 0 && a[i] >= a[i + 1]) {
                a[i] /= 2;
                ans++;  
            }
            if ((a[i] >= a[i + 1]) || (a[i] == 0 && i > 0)) {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}