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
    long long x;
    cin >> n >> x;

    vector<pair<int, int>> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i].first;
        nums[i].second = i + 1;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; ++i) {
        long long target = x - nums[i].first;
        int left = i + 1, right = n - 1;

        
        while (left < right) {
            long long sum = nums[left].first + nums[right].first;
            if (sum == target) {
                cout << nums[i].second << " " << nums[left].second << " " << nums[right].second << endl;
                return 0;
            } else if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }


    cout << "IMPOSSIBLE" << endl;
    return 0;
}
