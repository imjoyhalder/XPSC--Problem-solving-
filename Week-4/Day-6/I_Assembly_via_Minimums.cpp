#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n; cin >> n;
    int m = (n * n - n) / 2, b[m], a[n];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(b, b + m);
    int x = 1, ind = 0;
    int fromBtoA = n - x;
    while(n - x > 0)
    {
        a[ind++] = b[fromBtoA - 1];
        x++;
        fromBtoA += n - x;
    }
    a[n - 1] = 1000000000;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
 
int main()
{
   
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; cin>>t; 
    while(t--){
        solve(); 
    }
   
    return 0;
}