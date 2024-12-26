#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == 's')
        s[0] = '.';
    if (s.back() == 'p')
        s.back() = '.';
    bool found_p = false;
    bool found_s = false;
    for (const auto c : s)
    {
        switch (c)
        {
        case 'p':
            found_p = true;
            break;
        case 's':
            found_s = true;
            break;
        }
    }
    cout << (found_p && found_s ? "NO" : "YES") << '\n';
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();

    return 0;
}