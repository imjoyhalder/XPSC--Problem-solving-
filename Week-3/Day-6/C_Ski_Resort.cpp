#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll v = 0;
        int c = 0;
        for (auto t : a)
        {
            if (t <= q)
            {
                c++;
            }
            else
            {
                c = 0;
            }

            if (c >= k)
            {
                v += c - k + 1;
            }
        }
        cout << v << endl;
    }
    return 0;
}