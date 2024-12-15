#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

const int mod = 1e9 + 7;

string decToBinary(int n)
{
    string ans;
    for (int i = 64; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> m(64);
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        string s = decToBinary(v[i]);
        for (int j = 0; j < 64; j++)
        {
            if (s[j] != '0')
                m[j]++;
        }
    }
    for (int i = 0; i < 64; i++)
        g = __gcd(g, m[i]);
    for (int i = 1; i <= n; i++)
    {
        if (g % i == 0)
            cout << i << ' ';
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t; 
    cin >> t; 
    while (t--) {
        solve(); 
    }
    
    return 0;
}
