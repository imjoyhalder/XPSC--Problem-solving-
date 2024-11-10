#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y, z;
    cin >> x >> y >> z;
    
    float our_team = (x * 1.0 + y * 0.5);
  
    int remaining_match = 4-(x+y+z); 

    if (our_team+remaining_match > 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
