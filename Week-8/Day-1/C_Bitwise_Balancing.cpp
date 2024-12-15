#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
    }

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

void solve(){
    ll b, c, d;
    cin >> b >> c >> d;
    ll a = 0ll;
    for (ll i = 0; i < 64; i++)
    {
        ll aa = (1ll << i);
        ll bb= (aa&b)?aa:0ll;
        ll cc= (aa&c)?aa:0ll;
        ll dd= (aa&d)?aa:0ll;
        if((aa|bb)-dd==(aa&cc))
        {
            a+=aa;
        }

    }

    if ((a | b) == (d + (a & c)))
    {
        cout << a << nl;
    }
    else
    {
        cout << -1 << nl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}