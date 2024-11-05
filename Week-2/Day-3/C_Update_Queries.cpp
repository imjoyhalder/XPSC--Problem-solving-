#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string str1,str2; cin>>str1; 
        set<int> s; 
        for(int i=0; i<m; i++){
            int val; cin>>val; 
            s.insert(val); 
        }
        cin>>str2; 
        sort(str2.begin(),str2.end()); 
        
        int idx=0; 
        for(auto it:s)
        {
            str1[it-1]=str2[idx];
            idx++;
        }
        cout<<str1<<endl;
       

    }
    return 0;
}