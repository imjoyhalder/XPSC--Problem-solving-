#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        int m = 3;
        map<string, vector<int>> mp; 

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                string s; 
                cin >> s; 
                mp[s].push_back(i); 
            }
        }

        vector<int> point(m, 0); 
        for (auto it : mp) {
            vector<int> v = it.second; 
            if (v.size() == 1) {
                point[v[0]] += 3; 
            }
            if (v.size() == 2) {
                point[v[0]]++; 
                point[v[1]]++; 
            }
        }
        for (int i = 0; i < m; i++) {
            cout << point[i] << ' '; 
        }
        cout << endl; 
    }
      
    return 0;
}
