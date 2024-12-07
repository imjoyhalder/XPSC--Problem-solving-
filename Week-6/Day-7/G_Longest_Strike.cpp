#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        map<int, int> occ;
        for (int i = 0; i < n; i++)
        {
            occ[a[i]]++;
        }

        int L = -1, R = -1;
        int l = -1, r;

        for (int i = 0; i < n; i++)
        {
            if (occ[a[i]] < k)
                continue;

            if (l == -1)
            {
                l = a[i];
            }

            if (i == n - 1 || a[i + 1] - a[i] > 1 || occ[a[i + 1]] < k)
            {
                r = a[i];
                if (r - l >= R - L)
                {
                    R = r;
                    L = l;
                }
                l = -1;
                r = -1;
            }
        }

        if (L == -1)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << L << " " << R << '\n';
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve(); 
    }

    return 0;
}
