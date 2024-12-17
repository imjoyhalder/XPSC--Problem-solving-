#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int N; 
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i]; 
        }

      
        if (N == 1) {
            cout << 0 << endl; 
            continue;
        }
        if (N == 2) {
            cout << abs(A[0] - A[1]) << endl; 
            continue;
        }

      
        int result = INT_MAX;

        for (int i = 0; i < N; i++) {
          
            int maxScore = 0;
            if (i > 0) { 
                maxScore = max(maxScore, abs(A[i] - A[i - 1]));
            }
            if (i < N - 1) { 
                maxScore = max(maxScore, abs(A[i] - A[i + 1]));
            }
            result = min(result, maxScore); 
        }

        cout << result << endl;
    }
    return 0;
}
