#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(), v.end()
#define print(v)        \
    for (auto data : v) \
    cout << data << ' '
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x = 1, y = n * n;
    vector<int> v;
    for (int i = 1; i <= n * n; i++)
    {
        if (i % 2 == 1)
        {
            v.push_back(x);
            x++;
        }
        else
        {
            v.push_back(y);
            y--;
        }
    }
    x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = x; j < x + n; j++)
                cout << v[j] << " ";
            cout << endl;
            x += n;
        }
        else
        {
            for (int j = (n + x) - 1; j >= x; j--)
                cout << v[j] << " ";
            cout << endl;
            x += n;
        }
    }
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