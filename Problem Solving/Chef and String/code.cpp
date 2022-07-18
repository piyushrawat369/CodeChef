#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string a,b;
	    
	    for(int i=1; i<s.size(); i++){
	        a += s[i];
	    }
	    a += s[0];
	    
	    b += s[s.size()-1];
	    for(int i=1; i<s.size(); i++){
	        b += s[i-1];
	    }
	    if(a == b){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
