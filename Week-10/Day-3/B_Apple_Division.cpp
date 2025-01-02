#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> weights(n);
    long long totalWeight = 0;
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        totalWeight+= weights[i]; 
    }

    long long minDifference = LLONG_MAX;

    for (int mask = 0; mask < (1 << n); mask++) {
        long long groupAWeight = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                groupAWeight += weights[i];
            }
        }

        long long groupBWeight = totalWeight - groupAWeight;

        long long difference = abs(groupAWeight - groupBWeight);
        minDifference = min(minDifference, difference);
    }

    cout << minDifference << endl;

    return 0;
}
