#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int server, command; 
    cin >> server >> command; 

    map<string, string> mp; 
    while (server--) {
        string name, ip; 
        cin >> name >> ip; 
        mp[ip] = name; 
    }

    while (command--) {
        string name, ip; 
        cin >> name >> ip; 
        
        if (ip.back() == ';') {
            ip.pop_back();
        }
        
        auto it = mp.find(ip); 
        if (it != mp.end()) {
            cout << name << " " << ip <<";"<< " #" << it->second << endl; 
        }
    }

    return 0;
}
