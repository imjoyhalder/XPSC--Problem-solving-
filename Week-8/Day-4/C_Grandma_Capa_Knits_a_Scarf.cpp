#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(), v.end()
#define print(v)        
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 1e9;
    for(int i='a';i<='z';i++){
        int change=0;
        int l=0,r=n-1;
        while(l<=r){
            if(s[l]!=s[r]){
                if(s[l]==i){
                    l++;
                    change++;
                }
                else if(s[r]==i){
                    r--;
                    change++;
                }
                else{
                    change=1e9;
                    break;
                }
            }
            else{
                l++;
                r--;
            }
        }
        ans=min(ans,change);
    }
    if(ans == 1e9) cout<<-1<<"\n";
    else cout<<ans<<"\n"; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}