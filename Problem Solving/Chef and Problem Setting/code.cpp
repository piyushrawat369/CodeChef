#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    
	    string s;
	    string ans = "";
	    bool check = false;
	    
	    for(int i=0; i<n; i++){
	        int count = 0;
	        cin>>s;
	        for(int i=0; i<m; i++){
	            char x;
	            cin>>x;
	            if(x == '0' && s == "correct")  ans = "INVALID";
	            if(x == '1' && s == "wrong") count++;
	        }
	        if( count == m) check = true;
	        
	    }
	    if(ans == "INVALID")  cout<<"INVALID"<<endl;
	    else{
	         if(check == true) cout<<"WEAK"<<endl;
	         else cout<<"FINE"<<endl;
	    }
	}
	return 0;
}
