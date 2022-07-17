#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string s1 ="", s2 ="";
	    for(int i=0; i<n; i++){
	        if(i%2 == 0){
	            s1 += s[i];
	        }
	        else{
	            s2 += s[i];
	        }
	    }
	    sort(s1.begin(), s1.end());
	    sort(s2.begin(), s2.end());
	    
	    if(s1 != s2){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
