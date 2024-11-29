#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
 
    vector<pair<int, char>> freq(26);
    for (int i = 0; i < 26; i++)
        freq[i].second = 'a' + i;
 
    for (char c : s)
        freq[c - 'a'].first++;
 
    sort(freq.rbegin(), freq.rend());
    string result(n, ' ');
 
    int idx = 0;
    for (auto it : freq){   
        int cnt = it.first; 
        char ch = it.second; 
        if (cnt == 0)
            break;
 
        for (int i = 0; i < cnt; i++)
        {
            if (idx >= n)
                idx = 1;
 
            result[idx] = ch;
            idx += 2;
        }
    }
 
    cout << result << '\n'; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        solve(); 
    }
       
    return 0;
} 