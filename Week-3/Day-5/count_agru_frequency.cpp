#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    sort(pat.begin(),pat.end()); 
	    int k = pat.size(); 
	    
	    int l=0, r=0; 
	    int cnt = 0; 
	    while(r<txt.size()){
	        string str2 (txt.begin()+l,txt.begin()+r+1);
			sort(str2.begin(),str2.end()); 
			if(str2==pat){
				cnt++; 
			}
			if(r-l+1==k){
				l++; 
			}
			r++; 
	    }
		cout<<cnt<<endl; 
	}

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
	Solution s; 
	string pat,txt; 
	cin>>pat>>txt; 
	s.search(pat,txt); 
   
    return 0;
} 